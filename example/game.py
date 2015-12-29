import Pyro
import Scene
import test


class Game(Pyro.WindowHandle):
    def __init__(self, window):
        super(Game, self).__init__()
        self.window = window

        print "Test ('%s' %d, %d)" % (self.window.title, self.window.width, self.window.height)

        self.mainNode = Scene.Node("Main Node")
        self.testBox = Scene.Box("Test Box", 10, 10)
        self.mainNode.addElement(self.testBox)

        self.testElement = test.TestElement("Test Python Element")
        # self.mainNode.addElement(self.testElement)

        self.window.graph.addElement(self.mainNode)

    def run(self):
        pass
