class Order
{
  private:
    int OrderId;
    int NoOfProducts;
    char PaymentMethod[10];
    char status[10];
    time_t ExpectedDeliveryDate;
    char ShipmentMethod[10];

  public:
    Order();
    Order(int pOrderId,int pNoOfProducts,const char 
       pPaymentMethod[],const char pStatus[],time_t 
       pExpectedDeliveryDate,const char pShipmentMethod[]);

    void setOrderId(int pOrderId);
    void setNoOfProducts(int pNoOfProducts);
    void setPaymentMethod(const char pPaymentMethod[]);
    void setStatus(const char pStatus[]);
    void setExpectedDeliveryDate(time_t 
            pExpectedDeliveryDate);
    void setShipmentMethod(const char pShipmentMethod[]);
    void getOrderDetails();

    ~Order();
};

//Coded by IT21171024