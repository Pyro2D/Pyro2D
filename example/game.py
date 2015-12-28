import Pyro


class Game(Pyro.WindowHandle):
    def __init__(self, window):
        super(Game, self).__init__()

        self.window = window

        print "Test ('%s' %d, %d)" % (self.window.title, self.window.width, self.window.height)

    def run(self):
        print "RUN!"
