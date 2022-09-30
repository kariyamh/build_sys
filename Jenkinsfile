pipeline {
    agent any 
    stages {
        stage('Build') {
            steps {
                sh "cmake -S . -B build"
                sh "cmake --build build"
            }
        }
    }
}