import Pyro
import Scene
import Input


class Game(Pyro.WindowHandle):
    def __init__(self, window):
        super(Game, self).__init__()
        self.window = window

        print "Test ('%s' %d, %d)" % (self.window.title, self.window.width, self.window.height)

        self.playField = Scene.Node("Game Area")

        self.player1Speed = 400
        self.player1 = Scene.Box("Player 1", 30, 10, 10, 150)
        self.playField.addElement(self.player1)

        self.player2Speed = self.player1Speed
        self.player2 = Scene.Box("Player 1", self.window.width - 40, 10, 10, 150)
        self.playField.addElement(self.player2)

        self.window.graph.addElement(self.playField)

    def run(self, delta):
        if Input.isKeyDown(Input.KEY_ARROW_UP):
            self.player1.y -= self.player1Speed * delta
        if Input.isKeyDown(Input.KEY_ARROW_DOWN):
            self.player1.y += self.player1Speed * delta

        if self.player1.y < 0:
            self.player1.y = 0
        if self.player1.y > self.window.height - 150:
            self.player1.y = self.window.height - 150
