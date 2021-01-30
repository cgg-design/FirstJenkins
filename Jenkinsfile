pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                echo 'Building ..'
            }
            // steps {
            //     cmake arguments: '-DCMAKE_TOOLCHAIN_FILE=~/Projects/vcpkg/scripts/buildsystems/vcpkg.cmake'
            //     cmakeBuild buildType: 'Release', cleanBuild: true
            // }
        }
        stage('Test') {
            steps {
                echo 'Testing..'
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
}
