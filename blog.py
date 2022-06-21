class book:
    def __init__(self, title, main, price) -> None:
        self.title = title
        self.main = main
        self.price = price
        self.like = 5
    
    def introduce(self):
        print(f"이 책의 제목은 {self.title} 이며, 내용은 {self.main} 입니다.")
        print(f"이 책의 가격은 {self.price} 입니다.")
    
    def introduce(self, a, b):
        print(f"{a}는 {b}입니다.")

marble = book("인터스텔라", "평행우주", "21000")
marble.introduce()
marble.introduce("강호동", "씨름꾼")