#include <iostream>
#include <string>


struct Task {
	std::string taskName;
	struct Task* next;
};

//add task has 2 parameters 1 is Task that has pointer and reference to get the memory address and 2nd parameters is the task name;
void addTask(Task*& tasks, std::string taskName) {
	Task* newTaskNode = new Task; // Create new instance of node with struct of task

	newTaskNode->taskName = taskName; // the newtask node instance task name property will be assign to the one that user inputs from parameters

	newTaskNode->next = tasks; // this will lnk the currentTaskNode to the next tasks;

	tasks = newTaskNode; // assign the tasks to the new tasks

}


int main() {

	Task* tasks{};


	addTask(tasks, "Task 1");
	addTask(tasks, "Task 2");
	addTask(tasks, "Task 3");
	addTask(tasks, "Task 4");


	while (tasks != nullptr) {
		std::cout << tasks->taskName << std::endl;
		tasks = tasks->next;
	}


	return 0;
}