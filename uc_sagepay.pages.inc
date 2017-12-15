<?php
 
function uc_sagepay_notification($order_id, $cart_id) {

  // Ensure that we haven a empty output buffer
  ob_clean();

  // Initialise output data array
  $data = array();
  
  /**
   * Check that all the required fields were provided by Sagepay
   */
  if (!isset($_POST['Status'])) {
    $data['Status'] = 'ERROR';
    $data['StatusDetail'] = t('Status missing');
    $data['RedirectURL'] = url('cart/checkout', array('absolute' => TRUE));
    echo _uc_sagepay_encode_response($data);
    watchdog('uc_sagepay', 'Receiving payment notification. @status: @status_detail.@debug',
    array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_ERROR);
    uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
    module_invoke_all('exit');
    exit();
  }
  if (!isset($_POST['VPSTxId'])) {
    $data['Status'] = 'ERROR';
    $data['StatusDetail'] = t('VPSTxId missing');
    $data['RedirectURL'] = url('cart/checkout', array('absolute' => TRUE));
    echo _uc_sagepay_encode_response($data);
    watchdog('uc_sagepay', 'Receiving payment notification. @status: @status_detail.@debug',
    array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_ERROR);
    uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
    module_invoke_all('exit');
    exit();  
  }
  if (!isset($_POST['VendorTxCode'])) {
    $data['Status'] = 'ERROR';
    $data['StatusDetail'] = t('VendorTxCode missing');
    $data['RedirectURL'] = url('cart/checkout', array('absolute' => TRUE));
    echo _uc_sagepay_encode_response($data);
    watchdog('uc_sagepay', 'Receiving payment notification. @status: @status_detail.@debug',
    array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_ERROR);
    uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
    module_invoke_all('exit');
    exit();
  }
  if (!isset($_POST['AVSCV2'])) {
    $data['Status'] = 'ERROR';
    $data['StatusDetail'] = t('AVSCV2 missing');
    $data['RedirectURL'] = url('cart/checkout', array('absolute' => TRUE));
    echo _uc_sagepay_encode_response($data);
    watchdog('uc_sagepay', 'Receiving payment notification. @status: @status_detail.@debug',
    array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_ERROR);
    uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
    module_invoke_all('exit');
    exit();
  }
  if (!isset($_POST['AddressResult'])) {
    $data['Status'] = 'ERROR';
    $data['StatusDetail'] = t('AddressResult missing');
    $data['RedirectURL'] = url('cart/checkout', array('absolute' => TRUE));
    echo _uc_sagepay_encode_response($data);
    watchdog('uc_sagepay', 'Receiving payment notification. @status: @status_detail.@debug',
    array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_ERROR);
    uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
    module_invoke_all('exit');
    exit();
  }
  if (!isset($_POST['PostCodeResult'])) {
    $data['Status'] = 'ERROR';
    $data['StatusDetail'] = t('PostCodeResult missing');
    $data['RedirectURL'] = url('cart/checkout', array('absolute' => TRUE));
    echo _uc_sagepay_encode_response($data);
    watchdog('uc_sagepay', 'Receiving payment notification. @status: @status_detail.@debug',
    array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_ERROR);
    uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
    module_invoke_all('exit');
    exit();
  }
  if (!isset($_POST['CV2Result'])) {
    $data['Status'] = 'ERROR';
    $data['StatusDetail'] = t('CV2Result missing');
    $data['RedirectURL'] = url('cart/checkout', array('absolute' => TRUE));
    echo _uc_sagepay_encode_response($data);
    watchdog('uc_sagepay', 'Receiving payment notification. @status: @status_detail.@debug',
    array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_ERROR);
    uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
    module_invoke_all('exit');
    exit();
  }
  if (!isset($_POST['GiftAid'])) {
    $data['Status'] = 'ERROR';
    $data['StatusDetail'] = t('GiftAid missing');
    $data['RedirectURL'] = url('cart/checkout', array('absolute' => TRUE));
    echo _uc_sagepay_encode_response($data);
    watchdog('uc_sagepay', 'Receiving payment notification. @status: @status_detail.@debug',
    array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_ERROR);
    uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
    module_invoke_all('exit');
    exit();
  }
  if (!isset($_POST['3DSecureStatus'])) {
    $data['Status'] = 'ERROR';
    $data['StatusDetail'] = t('3DSecureStatus missing');
    $data['RedirectURL'] = url('cart/checkout', array('absolute' => TRUE));
    echo _uc_sagepay_encode_response($data);
    watchdog('uc_sagepay', 'Receiving payment notification. @status: @status_detail.@debug',
    array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_ERROR);
    uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
    module_invoke_all('exit');
    exit();
  }
  elseif ($_POST['3DSecureStatus'] == 'OK') {
    // This field is only expected if 3DSecureStatus is OK
    if (!isset($_POST['CAVV'])) {
      $data['Status'] = 'ERROR';
      $data['StatusDetail'] = t('CAVV missing');
      $data['RedirectURL'] = url('cart/checkout', array('absolute' => TRUE));
      echo _uc_sagepay_encode_response($data);
      watchdog('uc_sagepay', 'Receiving payment notification. @status: @status_detail.@debug',
      array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_ERROR);
      uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
      module_invoke_all('exit');
      exit();
    }
  }
  if (!isset($_POST['CardType'])) {
    $data['Status'] = 'ERROR';
    $data['StatusDetail'] = t('CardType missing');
    $data['RedirectURL'] = url('cart/checkout', array('absolute' => TRUE));
    echo _uc_sagepay_encode_response($data);
    watchdog('uc_sagepay', 'Receiving payment notification. @status: @status_detail.@debug',
    array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_ERROR);
    uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
    module_invoke_all('exit');
    exit();
  }
  if (!isset($_POST['Last4Digits'])) {
    $data['Status'] = 'ERROR';
    $data['StatusDetail'] = t('Last4Digits missing');
    $data['RedirectURL'] = url('cart/checkout', array('absolute' => TRUE));
    echo _uc_sagepay_encode_response($data);
    watchdog('uc_sagepay', 'Receiving payment notification. @status: @status_detail.@debug',
    array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_ERROR);
    uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
    module_invoke_all('exit');
    exit();
  }
  

  /**
   * Check that the path matches an actual order
   */
  $order = uc_order_load($order_id);
  if (!$order) {
    $data['Status'] = 'INVALID';
    $data['StatusDetail'] = t('Invalid notification URL');
    $data['RedirectURL'] = url('cart/checkout', array('absolute' => TRUE));
    echo _uc_sagepay_encode_response($data);
  // Log the event in the watchdog
    watchdog('uc_sagepay', 'Receiving payment notification. @status: @status_detail.@debug',
    array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_ERROR);
    uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
    module_invoke_all('exit');
    exit();
  }
  

  /**
   * Check that the transaction_id matches an order
   */
  $transaction_id = $_POST['VendorTxCode'];
  $result = db_query("SELECT COUNT(*) AS no_rows FROM {uc_sagepay_transactions} WHERE vendor_transaction_code = '%s'", array($transaction_id));
  $row = db_fetch_object($result);
  if ($row->no_rows < 1) {
    $data['Status'] = 'INVALID';
    $data['StatusDetail'] = t('No matching order');
    $data['RedirectURL'] = url('cart/checkout', array('absolute' => TRUE));
    echo _uc_sagepay_encode_response($data);
    // Log the event in the watchdog
    watchdog('uc_sagepay', 'Receiving payment notification. @status: @status_detail.@debug',
    array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_ERROR);
    uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
    module_invoke_all('exit');
    exit();
  }
  
  // Get details about the transaction from uc_sagepay_transactions table
  $result = db_query("SELECT * FROM {uc_sagepay_transactions} WHERE vendor_transaction_code = '%s'", array($transaction_id));
  $row = db_fetch_object($result);
  

  /**
   * Check that the transaction_id matches the same order as the path
   */
  if ($order_id != $row->order_id) {
    $data['Status'] = 'INVALID';
    $data['StatusDetail'] = t('Transaction id does not match with the expected order');
    $data['RedirectURL'] = url('cart/checkout', array('absolute' => TRUE));
    echo _uc_sagepay_encode_response($data);
    // Log the event in the watchdog
    watchdog('uc_sagepay', 'Receiving payment notification. @status: @status_detail.@debug',
    array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_ERROR);
    uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
    module_invoke_all('exit');
    exit();
  }
  
  /**
   * The message is legit, take appropriate action depending upon the status
   */  
  $order = uc_order_load($row->order_id);

  switch ($_POST['Status']) {
    case 'OK':

        /**
         * Check the MD5 signature
         */
        $signature_string = $_POST['VPSTxId'] . $_POST['VendorTxCode'] . $_POST['Status']
                          . $_POST['TxAuthNo'] . variable_get('uc_sagepay_vendor_name', NULL) . $_POST['AVSCV2']
                          . $row->security_key . $_POST['AddressResult'] . $_POST['PostCodeResult']
                          . $_POST['CV2Result'] . $_POST['GiftAid'] . $_POST['3DSecureStatus']
                          . $_POST['CAVV'] . ((!empty($_POST['AddressStatus'])) ? $_POST['AddressStatus'] : '') . ((!empty($_POST['PayerStatus'])) ? $_POST['PayerStatus'] : '')
                          . $_POST['CardType'] . $_POST['Last4Digits']
                          . ((!empty($_POST['DeclineCode'])) ? $_POST['DeclineCode'] : '')
                          . ((!empty($_POST['ExpiryDate'])) ? $_POST['ExpiryDate'] : '')
                          . ((!empty($_POST['FraudResponse'])) ? $_POST['FraudResponse'] : '')
                          . ((!empty($_POST['BankAuthCode'])) ? $_POST['BankAuthCode'] : '')
                          ;
        $signature = drupal_strtoupper(md5($signature_string));
      
        if ($signature != $_POST['VPSSignature']) {
          $data['Status'] = 'ERROR';
          $data['StatusDetail'] = t('VPSSignature does not match the expected signature');
          $data['RedirectURL'] = url('cart/checkout/review', array('absolute' => TRUE));
          echo _uc_sagepay_encode_response($data);
          // Log the event in the watchdog
          watchdog('uc_sagepay', 'Receiving payment notification. @status: @status_detail.@debug',
          array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_ERROR);
          uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
          module_invoke_all('exit');
          exit();
        }
      
        /**
         * Check that TxAuthNo is present
         */
        if (!isset($_POST['TxAuthNo'])) {
          $data['Status'] = 'ERROR';
          $data['StatusDetail'] = t('TxAuthNo missing');
          $data['RedirectURL'] = url('cart/checkout/review', array('absolute' => TRUE));
          echo _uc_sagepay_encode_response($data);
          watchdog('uc_sagepay', 'Receiving payment notification. @status: @status_detail.@debug',
          array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_ERROR);
          uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
          module_invoke_all('exit');
          exit();
        }
      
        /**           
         * Mark payment as received
         * The order is completed on the Drupal side once the user is returned to the thankyou page
         */
        $data['Status'] = 'OK';
        $data['RedirectURL'] = url('order/' . $order_id . '/thankyou', array('absolute' => TRUE));
        echo _uc_sagepay_encode_response($data);
        watchdog('uc_sagepay', 'Payment confirmed by Sagepay. @status: @status_detail.@debug',
        array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_NOTICE);
        uc_order_update_status($order->order_id, uc_order_state_default('post_checkout'));
        $comment = t('Payment confirmed by Sagepay.');
        uc_payment_enter($order->order_id, 'uc_sagepay', $order->order_total, $order->uid, NULL, $comment);
        // Log an admin comment with transaction details in it
        $comment = t(
          'Sagepay Server payment confirmed:
          <br />Status: @Status
          <br />VPSTxId: @VPSTxId
          <br />VendorTxCode: @VendorTxCode
          <br />TxAuthNo: @TxAuthNo
          <br />SecurityKey: @SecurityKey',
          array('@Status' => $_POST['Status'], '@VPSTxId' => $_POST['VPSTxId'], '@VendorTxCode' => $_POST['VendorTxCode'], '@TxAuthNo' => $_POST['TxAuthNo'], '@SecurityKey' => $row->security_key)
        );
        uc_order_comment_save($order_id, 0, $comment, 'admin', uc_order_state_default('post_checkout'));
      break;
    
    case 'NOTAUTHED':
    
        $data['Status'] = 'OK';
        // Append an error message key to the redirectURL so that we can show the user an appropriate error message
        $data['RedirectURL'] = url('cart/checkout/review', array('absolute' => TRUE, 'query' => 'uc_sagepay_error=notauthed'));
        echo _uc_sagepay_encode_response($data);
        watchdog('uc_sagepay', 'Payment not authorised by Sagepay. @status: @status_detail.@debug',
        array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_ERROR);
        uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
        module_invoke_all('exit');
        exit();
      
      break;
      
    case 'ABORT':
    
        $data['Status'] = 'OK';
        $data['RedirectURL'] = url('cart/checkout/review', array('absolute' => TRUE));
        echo _uc_sagepay_encode_response($data);
        watchdog('uc_sagepay', 'Payment cacelled by user. @status: @status_detail.@debug',
        array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_NOTICE);
        uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
        module_invoke_all('exit');
        exit();
      
      break;
      
    case 'REJECTED':
    
        $data['Status'] = 'OK';
        $data['RedirectURL'] = url('cart/checkout/review', array('absolute' => TRUE, 'query' => 'uc_sagepay_error=rejected'));
        echo _uc_sagepay_encode_response($data);
        watchdog('uc_sagepay', 'Payment rejected by Sagepay because of the rules set on account. @status: @status_detail.@debug',
        array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_ERROR);
        uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
        module_invoke_all('exit');
        exit();
      break;
      
    case 'ERROR':
    
        $data['Status'] = 'OK';
        $data['RedirectURL'] = url('cart/checkout/review', array('absolute' => TRUE, 'query' => 'uc_sagepay_error=error'));
        echo _uc_sagepay_encode_response($data);
        watchdog('uc_sagepay', 'Payment could not be completed because of an error at Sagepay. @status: @status_detail.@debug',
        array('@status' => $data['Status'], '@status_detail' => $data['StatusDetail'], '@debug' => variable_get('uc_sagepay_debug_notifications', FALSE) ? ' <pre>' . print_r($_POST, TRUE) . '</p>' : ''), WATCHDOG_ERROR);
        uc_order_update_status($order->order_id, uc_order_state_default('in_checkout'));
        module_invoke_all('exit');
        exit();
        
      break;
      
  }
  
  exit();

}

/**
 * Encode the notification response data into the appropriate format for Sagepay
 */
function _uc_sagepay_encode_response($data) {
  $output = '';
  foreach ($data as $key => $value) {
    $output .= $key . "=" . $value . "\r\n";
  }
  return $output;
}
 
/**
 * Order thankyou page
 */
function uc_sagepay_order_thankyou($order_id) {
  $order = uc_order_load($order_id);
  // Complete sale and get the checkout message
  $output = uc_cart_complete_sale($order, variable_get('uc_new_customer_login', FALSE));
  // Empty cart
  uc_cart_empty(uc_cart_get_id());
  // Return the checkout message
  return $output;
}