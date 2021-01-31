pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                // cmake arguments: '-DCMAKE_TOOLCHAIN_FILE=~/Projects/vcpkg/scripts/buildsystems/vcpkg.cmake'
                // cmakeBuild buildType: 'Release', cleanBuild: true
                /*check if build dir exit,and switch into else create it*/
                // If it doesn't exist
                // if( !build.exists() ) {
                //     // Create all folders up-to and including B
                //     build.mkdirs()
                // }
                // if( !build.empty() ) {
                //     // clear the containt
                //     sh 'rm -r *'
                // }
                sh "mkdir -p build"
                dir ('build') {
                    sh "cmake ../ && cmake --build ."
                }   
            }
        }
        stage('Test') {
            steps {
                echo 'Testing.......'
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
}
