重新學習C++

重要愛念: 
        Untracked = Git 還不知道這些檔案

檢查Git狀態:
        git status

檢查提交歷史: 
        git log --oneline

ADD:   
     方法一:　逐一加入 git add README.md git add app.js
     方法二:  一次加入全部 git add . 

     重要概念: 
            綠色 = 已在暫存區，準備提交，代表當前目錄的所有檔案

Commit: 
    Commit(提交) :像是一個「存檔點」，用來記錄當下的檔案狀態
    提交指令: git commit -m "Install Commit: add README and count.cpp"

        提交訊息建議:
                (1) 簡潔明瞭
                (2) 描述這次改了什麼 
                (3) 使用現在式動詞 

    ex :  我增加一些東西，它記得很清楚。
          1 file changed, 21 insertions(+), 1 deletion(-)  
          --> 1 個檔案發生變化，新增了 21 行內容 刪除了 1 行內容
        
更新到GitHub:
            1. git add . 
            2. git commit -m "Install commit: add README"
            3. git branch -M main 
            4. git push -u origin main
Connect:
         步驟一 : 新增遠端倉庫
            git remote add origin https://github.com/HarryHan0603/c-_project.git
         
         步驟二 :檢查遠端設定
         　 git remote -v

         步驟三: 推送到GitHub
            git branch -M main 
            git push -u origin main

            指令解釋:
            　  (1) remote add origin = 設定遠端倉庫別名
                (2) branch -M main = 確保主分支名稱
                (3) push -u origin main = 推送並設定追蹤

Clone:  
        使用場景:
        　　　　(1) 加入新公司，下載專案程式碼
               (2) 參與開源專案
               (3) 和同學協作作業
        
        Clone 指令:
                git clone https://github.com/你的用戶/c-_project.git
        
        clone 做了什麼:
                (1) 下載完整的專案檔案
                (2) 下載完整的Git 歷史紀錄
                (3) 自動設定Origin 遠端倉庫
                (4) 自動切換到主分支
        
        驗證:
                cd c++_project
                git log --oneline
                git remote -v 

Pull: 
        PUll 更新:
                　git pull origin main

        重要概念:
                　git pull = git fetch + git merge

                    下載遠端更新並自動合併

Branch: 
        main 分支:　穩定的主要版本
        feature 分支: 開發新功能  (類似自己儲存遊戲進度，不會影響主分支)
        bugfix 分支:　修復錯誤

        指令: 
                git checkout -b feature/add-stying
                    (建立並切換到新分支)
                git branch
                    (檢查目前分支)

        提交新功能(新分支):
                git add style.css
                git commit -m "add CSS styling"

        切換回主分支:
                git checkout main 
                dir
        
        提交新功能: 
                git checkout feature/add-styling
                dir

        合併功能分支:
                git merge feature/add-styling

        推送更新到GitHub: 
                git push origin main

建立新的GitHub:
            1. git init 
            2. git add.
            3. git commit -m "Install commit: add README"
            3. git remote add origin https://github.com/你的用戶/c-_project.git
            4. git branch -M main 
            5. git push -u origin main


