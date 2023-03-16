<?php

   function twoSum(array $arr, int $target)
    {
    
        for($i = 0; $i < count($arr); $i++)
        {
            for($j = $i + 1; $j < count($arr); $j++)
            {
                if($i != $j)
                {
                    if($arr[$i] + $arr[$j] == $target)
                        return array($i, $j);
                }
            }
        }
    }
?>
