pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                echo 'Building..'
		sh 'cat main.c'
		sh 'make'
            }
        }
    }
}
