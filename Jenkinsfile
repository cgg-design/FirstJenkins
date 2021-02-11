pipeline {
    agent any
    triggers {
        githubPush()
      }
    stages {
        stage('Build') {
            steps {
                sh "mkdir -p build"
                dir ('build') {
                    // run CMakeList from root folder and buid 
                    sh "cmake ../ && cmake --build ."
                    // build executable and run it
                    sh "./apps/CPPJenkins_Executable"
                }   
            }
        }
        stage('Test') {
            steps {
                echo 'Testing....'
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
}
