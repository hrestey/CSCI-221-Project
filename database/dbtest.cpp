#include <iostream>
#include "sqlite3.h"
#include "event.h"
#include "dbtest.h"

using namespace std;

void dbtest::test() {
    Event* event = Event::createEvent("Test Name", "Test Description", "Test Org", "Test Status");
    cout << event->getEventName() << " " << event->getEventDesc() << " " << event->getOrgName() << " " << event->getStatus() << endl;
    event->setEventName("Naked Mole Rate Exhibition");
    cout << event->getEventName() << endl;
    event->setOrgName("The Eckroth Foundation for Naked Mole Rat Research");
    cout << event->getOrgName() << endl;
    event->setStatus("Exhibiting now!");
    cout << event->getStatus() << endl;
    //User* user_model = User::createUser("test id", "test@test.test", "test", "test", "12345");
    //Activity* activity_model = Activity::createActivity("activity name", 1, "test status"); //add prereqs too
}
