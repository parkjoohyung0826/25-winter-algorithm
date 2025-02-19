-- 코드를 입력하세요
SELECT BO.TITLE, RE.BOARD_ID, RE.REPLY_ID, RE.WRITER_ID, RE.CONTENTS, DATE_FORMAT(RE.CREATED_DATE, '%Y-%m-%d') AS CREATED_DATE
FROM USED_GOODS_REPLY RE
INNER JOIN USED_GOODS_BOARD BO ON RE.BOARD_ID = BO.BOARD_ID
WHERE BO.CREATED_DATE LIKE '2022-10%'
ORDER BY RE.CREATED_DATE ASC, BO.TITLE ASC;