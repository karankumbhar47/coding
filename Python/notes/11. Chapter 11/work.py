from os import remove


class MyTask(list):

    def __init__(self, name):
        super().__init__(self)
        self.name = name
        self.didiComp = 0
        self.fatherComp = 0
        self.momComp = 0
        self.myselfComp = 0
        self.tdidi = [
            'Exit to Main Menu', f'Sticking  of Karan\'s chappal.',
            f'Helf mom in making sweets for {self.name}.',
            'Check your bluetooth order'
        ]
        self.tfather = [
            'Exit to Main Menu', f'Sticking  of {self.name}\'s chappal.',
            'Bring stationary from given list. Please Enter \'l1\' to display list of \'Stationatry object\'.',
            'Bring Electronic things from given list. Please Enter \'l2\' to display list \'Electronic Things\'.'
        ]
        self.tmom = [
            'Exit to Main Menu', 'Give him one cloth to clean Table'
            'Making sweets for Karan. Please Enter \'l3\' to display list of \'sweets\' and \'l4\' to display list of \'bisquit\'',
            'Checks bags and cloths of Karan.',
            'Take the things from our shop that given in list. Please Enter \'l6\' to display list of \'Daily things\'.'
        ]
        self.tmySelf = [
            'Exit to Main Menu',
            'Put your Original Income certificate in document list.',
            'Check that are you taking your all documents with you?',
            'Take your all cloth with you.', 'Take your chappals with you.',
            'Wash your Shooes.', 'Take your all medicine with you.',
            'Take medicine daily', 'Take \'MAX CLEAN\' with you.',
            'Ask mom whether to go to baba or not?',
            'Go to \'Jotiba Dongar\'.',
            'Check things from list are with you or not? Please Enter \'l5\' to display list.',
            'Diary from Prashant',
            'Put bed and poster inside shop with father',
            'replace your phone\'s screenguard and cover ',
            'Ask didi about buying new T-shirt',
            'Book Kolhapur to pune Train ', 'Pay fees',
            'Collect your keybord and mouse', 'Take Your Blanket',
            'Take your Sweter and topi with you',
            'If you are done with all task show them your \'luxury things\' list. Please Enter \'l7\' to display list.'
        ]

    '======================================================================================================================================================'

    def myself(self):
        print(
            '********************************************************************'
        )
        print('==> I need to complete following tasks\n')
        MyTask.printTask(self.tmySelf)
        MyTask.taskcomplete(self, self.tmySelf)

    def didi(self):
        print(
            '********************************************************************'
        )
        print('==> Didi you need to complete following tasks\n')
        MyTask.printTask(self.tdidi)
        MyTask.taskcomplete(self, self.tdidi)

    def father(self):
        print(
            '********************************************************************'
        )
        print('==> Father you need to complete following tasks\n')
        MyTask.printTask(self.tfather)
        MyTask.taskcomplete(self, self.tfather)

    def mom(self):
        print(
            '********************************************************************'
        )
        print('==> mom you need to complete following tasks\n')
        MyTask.printTask(self.tmom)
        MyTask.taskcomplete(self, self.tmom)

    '=========================================================================================================================================================='

    def Display(self):
        print('=================> Welcome To Mytask <=================')
        print('''            Whos Task you Want to view?
            1.Your own
            2.Didi
            3.Father
            4.Mom
            5.Exit\n
    ''')
        print('Please Enter option number that you want')
        try:
            self.option = int(input())
        except:
            print('Please Enter valid Input')
            karan.Display()
        if self.option == 1:
            MyTask.myself(self)
        elif self.option == 2:
            MyTask.didi(self)
        elif self.option == 3:
            MyTask.father(self)
        elif self.option == 4:
            MyTask.mom(self)
        elif self.option == 5:
            exit()
        else:
            print("Please enter valid input\n")
            MyTask.Display()

    def printTask(l):
        for i, j in enumerate(l[1:]):
            print(f'            {i+1}){j}')
        print('\n')

    def taskcomplete(self, l):
        print(
            'Enter the Task number that you have completed or Enter \'0\' to exit Main Menu'
        )
        self.taskComplete = input()
        print('\n')
        if self.taskComplete == 'l1' or self.taskComplete == 'l2' or self.taskComplete == 'l3' or self.taskComplete == 'l4' or self.taskComplete == 'l5' or self.taskComplete == 'l6' or self.taskComplete == 'l7':
            k = list(self.taskComplete)
            k
        else:
            try:
                self.taskComplete = int(self.taskComplete)
            except:
                print('Please Enter Valid input')
                karan.Display()
            if self.taskComplete == 0:
                MyTask.Display(self)
            elif len(l) <= 2:
                print(
                    '''Congratulation you have completed all task from your list.Don't Waste your time. Try to helf other's.\n
                ''')
                MyTask.Display(self)
            elif len(l) > 2:
                if self.option == 1:
                    self.tmySelf.remove(self.tmySelf[self.taskComplete])
                    MyTask.taskCounter(self, 'self.myselfComp')
                elif self.option == 2:
                    self.tdidi.remove(self.tdidi[self.taskComplete])
                    MyTask.taskCounter(self, 'self.didiComp')
                elif self.option == 3:
                    self.tfather.remove(self.tfather[self.taskComplete])
                    MyTask.taskCounter(self, 'self.fatherComp')
                elif self.option == 4:
                    self.tmom.remove(self.tmom[self.taskComplete])
                    MyTask.taskCounter(self, 'self.momComp')

    def taskCounter(self, count):
        if count == 'self.didiComp':
            self.didiComp += 1
            print(
                f'''Congratulation you have completed {self.didiComp} tasks from your list.Task remaining from your list are {len(self.tdidi)-1} .
Best luck for your next tasks\n''')
            MyTask.didi(self)

        elif count == 'self.fatherComp':
            self.fatherComp += 1
            print(
                f'''Congratulation you have completed {self.fatherComp} tasks from your list.Task remaining from your list are {len(self.tfather)-1} .
Best luck for your next tasks\n''')
            MyTask.father(self)

        elif count == 'self.momComp':
            self.momComp += 1
            print(
                f'''Congratulation you have completed {self.momComp} tasks from your list.Task remaining from your list are {len(self.tmom)-1} .
Best luck for your next tasks\n''')
            MyTask.mom(self)

        elif count == 'self.myselfComp':
            self.myselfComp += 1
            print(
                f'''Congratulation you have completed {self.myselfComp} tasks from your list.Task remaining from your list are {len(self.tmySelf)-1} .
Best luck for your next tasks\n''')
            MyTask.myself(self)


'============================================================================================================================================================='


class list(MyTask):

    def __init__(self, l):
        self.stationaryList = [
            'Bring complete 4 blank page notebooks',
            'Blank paper for rough work', 'Refill packet of blue lexi pen',
            '2 blue lexi pen'
        ]
        self.electronicThings = [
            'Pen drive 32 GB', 'Adapter for lan cable',
            'Keyboard and Mouse with sensor'
        ]
        self.sweets = ['Badang', 'Chakali', 'Chivada', 'Bisquit']
        self.bisquit = ['Crackzag', 'Parle G', 'Cream Bisquit']
        self.collageThings = [
            'Notes of python', 'Mobile and it\'s charger',
            'laptop and it\'s charger', 'headphone', 'Mouse and keyboard'
        ]
        self.dailyThing = [
            'Soap for bath', 'Soap for cloths', 'Powder daba', 'ant chock'
        ]
        self.luxuryThings = [
            'New Cover', 'Sticker for laptop', 'Sleeper for collage',
            'Shooes for collage', 'extension box'
        ]
        if l == 'l1':
            print(
                '============================================================================================================'
            )
            print('List of Stationary object')
            list.printList(self.stationaryList)
            print("Please enter \'0\' to exit List\n")
            op = int(input())
            print('\n')
            if op == 0:
                karan.father()
        elif l == 'l2':
            print(
                '============================================================================================================'
            )
            print('List of Electronic object')
            list.printList(self.electronicList)
            print("Please enter \'0\' to exit List\n")
            op = int(input())
            print('\n')
            if op == 0:
                karan.father()
        elif l == 'l3':
            print(
                '============================================================================================================'
            )
            print('List of Sweets')
            list.printList(self.sweets)
            print("Please enter \'0\' to exit List\n")
            op = int(input())
            print('\n')
            if op == 0:
                karan.mom()
        elif l == 'l4':
            print(
                '============================================================================================================'
            )
            print('List of Bisquit')
            list.printList(self.bisquit)
            print("Please enter \'0\' to exit List\n")
            op = int(input())
            print('\n')
            if op == 0:
                karan.mom()
        elif l == 'l5':
            print(
                '============================================================================================================'
            )
            print('List of Collage things')
            list.printList(self.collageThings)
            print("Please enter \'0\' to exit List\n")
            op = int(input())
            print('\n')
            if op == 0:
                karan.myself()
        elif l == 'l6':
            print(
                '============================================================================================================'
            )
            print('List of daily things')
            list.printList(self.dailyThing)
            print("Please enter \'0\' to exit List\n")
            op = int(input())
            print('\n')
            if op == 0:
                karan.mom()
        elif l == 'l7':
            print(
                '============================================================================================================'
            )
            print('List of luxury Things')
            list.printList(self.luxuryThings)
            print("Please enter \'0\' to exit List\n")
            op = int(input())
            print('\n')
            if op == 0:
                karan.myself()

    def printList(l):
        for i, j in enumerate(l):
            print(f'            {i+1}){j}')
        print('\n')


'============================================================================================================================================================'

karan = MyTask('Karan')
karan.Display()