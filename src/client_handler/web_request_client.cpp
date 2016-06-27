// Copyright (c) 2012-2014 The CEF Python authors. All rights reserved.
// License: New BSD License.
// Website: http://code.google.com/p/cefpython/

#include "web_request_client.h"

void WebRequestClient::OnRequestComplete(CefRefPtr<CefURLRequest> request) {
    WebRequestClient_OnRequestComplete(webRequestId_, request);
}

void WebRequestClient::OnUploadProgress(CefRefPtr<CefURLRequest> request,
                            int64 current,
                            int64 total) {
    WebRequestClient_OnUploadProgress(webRequestId_, request, current, total);
}

void WebRequestClient::OnDownloadProgress(CefRefPtr<CefURLRequest> request,
                              int64 current,
                              int64 total) {
    WebRequestClient_OnDownloadProgress(webRequestId_, request, current,
            total);
}

void WebRequestClient::OnDownloadData(CefRefPtr<CefURLRequest> request,
                          const void* data,
                          size_t data_length) {
    WebRequestClient_OnDownloadData(webRequestId_, request, data, data_length);
}

bool WebRequestClient::GetAuthCredentials(bool isProxy,
                                const CefString& host,
                                int port,
                                const CefString& realm,
                                const CefString& scheme,
                                CefRefPtr<CefAuthCallback> callback) {
    // Not yet implemented.
    return false;
}