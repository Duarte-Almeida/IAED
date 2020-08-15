# Inventory Manager

This program consists in a very simple database for an inventory that can store all types of products along with some information. It can also process orders of those products.

### Data scheme

The product inventory is a large array of products whose id is the index in the array and thus corresponds to the order by which they were added. In an equivalent manner there is an array that stores the orders (which are sets of products).

### Features

Here is a table of the supported features and the respective commands.

| Command | Action | Input format |
| ------- | ------ | ------------ |
| a | Add a new product | a:product_id:quantity |
| q | Add a certain stock to a product | q:product_id:quantity |
| N | Add a new order | N |
| A | Add a product to an order | A:order_id:product_id:quantity |
| r | Remove stock from a product | r:product_id:quantity |
| R | Remove a product from an order | R:order_id:product:id |
| C | Compute order price | C:order_id |
| p | Change product price | p:product_id:new_price |
| E | List product information in an order | E:order_id_product:id |
| m | Show order with the most quantity of a product | m:product:id |
| l | List all existing products by ascending order of price | l |
| L | List all products in a order alphabetically | L |
| x | Quit | x |




