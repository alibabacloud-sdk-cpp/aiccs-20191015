// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_AICCS20191015_H_
#define ALIBABACLOUD_AICCS20191015_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Aiccs20191015 {
class SendHotlineHeartBeatRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> token{};

  SendHotlineHeartBeatRequest() {}

  explicit SendHotlineHeartBeatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~SendHotlineHeartBeatRequest() = default;
};
class SendHotlineHeartBeatResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  SendHotlineHeartBeatResponseBody() {}

  explicit SendHotlineHeartBeatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SendHotlineHeartBeatResponseBody() = default;
};
class SendHotlineHeartBeatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SendHotlineHeartBeatResponseBody> body{};

  SendHotlineHeartBeatResponse() {}

  explicit SendHotlineHeartBeatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SendHotlineHeartBeatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendHotlineHeartBeatResponseBody>(model1);
      }
    }
  }


  virtual ~SendHotlineHeartBeatResponse() = default;
};
class StartChatWorkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  StartChatWorkRequest() {}

  explicit StartChatWorkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~StartChatWorkRequest() = default;
};
class StartChatWorkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  StartChatWorkResponseBody() {}

  explicit StartChatWorkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StartChatWorkResponseBody() = default;
};
class StartChatWorkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartChatWorkResponseBody> body{};

  StartChatWorkResponse() {}

  explicit StartChatWorkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartChatWorkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartChatWorkResponseBody>(model1);
      }
    }
  }


  virtual ~StartChatWorkResponse() = default;
};
class HangUpDoubleCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> acid{};

  HangUpDoubleCallRequest() {}

  explicit HangUpDoubleCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (acid) {
      res["Acid"] = boost::any(*acid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Acid") != m.end() && !m["Acid"].empty()) {
      acid = make_shared<string>(boost::any_cast<string>(m["Acid"]));
    }
  }


  virtual ~HangUpDoubleCallRequest() = default;
};
class HangUpDoubleCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  HangUpDoubleCallResponseBody() {}

  explicit HangUpDoubleCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~HangUpDoubleCallResponseBody() = default;
};
class HangUpDoubleCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<HangUpDoubleCallResponseBody> body{};

  HangUpDoubleCallResponse() {}

  explicit HangUpDoubleCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        HangUpDoubleCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HangUpDoubleCallResponseBody>(model1);
      }
    }
  }


  virtual ~HangUpDoubleCallResponse() = default;
};
class UpdateAgentRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> displayName{};
  shared_ptr<vector<int>> skillGroupId{};
  shared_ptr<vector<int>> skillGroupIdList{};

  UpdateAgentRequest() {}

  explicit UpdateAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (skillGroupIdList) {
      res["SkillGroupIdList"] = boost::any(*skillGroupIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["SkillGroupId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SkillGroupId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      skillGroupId = make_shared<vector<int>>(toVec1);
    }
    if (m.find("SkillGroupIdList") != m.end() && !m["SkillGroupIdList"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["SkillGroupIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SkillGroupIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      skillGroupIdList = make_shared<vector<int>>(toVec1);
    }
  }


  virtual ~UpdateAgentRequest() = default;
};
class UpdateAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  UpdateAgentResponseBody() {}

  explicit UpdateAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateAgentResponseBody() = default;
};
class UpdateAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAgentResponseBody> body{};

  UpdateAgentResponse() {}

  explicit UpdateAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAgentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAgentResponse() = default;
};
class EditQualityRuleTagRequestAnalysisTypes : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> id{};

  EditQualityRuleTagRequestAnalysisTypes() {}

  explicit EditQualityRuleTagRequestAnalysisTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~EditQualityRuleTagRequestAnalysisTypes() = default;
};
class EditQualityRuleTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<vector<EditQualityRuleTagRequestAnalysisTypes>> analysisTypes{};

  EditQualityRuleTagRequest() {}

  explicit EditQualityRuleTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (analysisTypes) {
      vector<boost::any> temp1;
      for(auto item1:*analysisTypes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AnalysisTypes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AnalysisTypes") != m.end() && !m["AnalysisTypes"].empty()) {
      if (typeid(vector<boost::any>) == m["AnalysisTypes"].type()) {
        vector<EditQualityRuleTagRequestAnalysisTypes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AnalysisTypes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EditQualityRuleTagRequestAnalysisTypes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        analysisTypes = make_shared<vector<EditQualityRuleTagRequestAnalysisTypes>>(expect1);
      }
    }
  }


  virtual ~EditQualityRuleTagRequest() = default;
};
class EditQualityRuleTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  EditQualityRuleTagResponseBody() {}

  explicit EditQualityRuleTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EditQualityRuleTagResponseBody() = default;
};
class EditQualityRuleTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EditQualityRuleTagResponseBody> body{};

  EditQualityRuleTagResponse() {}

  explicit EditQualityRuleTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EditQualityRuleTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EditQualityRuleTagResponseBody>(model1);
      }
    }
  }


  virtual ~EditQualityRuleTagResponse() = default;
};
class GetOnlineServiceVolumeRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<long>> agentIds{};
  shared_ptr<vector<long>> depIds{};
  shared_ptr<vector<long>> groupIds{};
  shared_ptr<string> timeLatitudeType{};
  shared_ptr<bool> existAgentGrouping{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existSkillGroupGrouping{};

  GetOnlineServiceVolumeRequest() {}

  explicit GetOnlineServiceVolumeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (agentIds) {
      res["AgentIds"] = boost::any(*agentIds);
    }
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    if (timeLatitudeType) {
      res["TimeLatitudeType"] = boost::any(*timeLatitudeType);
    }
    if (existAgentGrouping) {
      res["ExistAgentGrouping"] = boost::any(*existAgentGrouping);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existSkillGroupGrouping) {
      res["ExistSkillGroupGrouping"] = boost::any(*existSkillGroupGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("AgentIds") != m.end() && !m["AgentIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AgentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AgentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      agentIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DepIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      depIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      groupIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("TimeLatitudeType") != m.end() && !m["TimeLatitudeType"].empty()) {
      timeLatitudeType = make_shared<string>(boost::any_cast<string>(m["TimeLatitudeType"]));
    }
    if (m.find("ExistAgentGrouping") != m.end() && !m["ExistAgentGrouping"].empty()) {
      existAgentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistAgentGrouping"]));
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistSkillGroupGrouping") != m.end() && !m["ExistSkillGroupGrouping"].empty()) {
      existSkillGroupGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistSkillGroupGrouping"]));
    }
  }


  virtual ~GetOnlineServiceVolumeRequest() = default;
};
class GetOnlineServiceVolumeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> agentIdsShrink{};
  shared_ptr<string> depIdsShrink{};
  shared_ptr<string> groupIdsShrink{};
  shared_ptr<string> timeLatitudeType{};
  shared_ptr<bool> existAgentGrouping{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existSkillGroupGrouping{};

  GetOnlineServiceVolumeShrinkRequest() {}

  explicit GetOnlineServiceVolumeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (agentIdsShrink) {
      res["AgentIds"] = boost::any(*agentIdsShrink);
    }
    if (depIdsShrink) {
      res["DepIds"] = boost::any(*depIdsShrink);
    }
    if (groupIdsShrink) {
      res["GroupIds"] = boost::any(*groupIdsShrink);
    }
    if (timeLatitudeType) {
      res["TimeLatitudeType"] = boost::any(*timeLatitudeType);
    }
    if (existAgentGrouping) {
      res["ExistAgentGrouping"] = boost::any(*existAgentGrouping);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existSkillGroupGrouping) {
      res["ExistSkillGroupGrouping"] = boost::any(*existSkillGroupGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("AgentIds") != m.end() && !m["AgentIds"].empty()) {
      agentIdsShrink = make_shared<string>(boost::any_cast<string>(m["AgentIds"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      depIdsShrink = make_shared<string>(boost::any_cast<string>(m["DepIds"]));
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      groupIdsShrink = make_shared<string>(boost::any_cast<string>(m["GroupIds"]));
    }
    if (m.find("TimeLatitudeType") != m.end() && !m["TimeLatitudeType"].empty()) {
      timeLatitudeType = make_shared<string>(boost::any_cast<string>(m["TimeLatitudeType"]));
    }
    if (m.find("ExistAgentGrouping") != m.end() && !m["ExistAgentGrouping"].empty()) {
      existAgentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistAgentGrouping"]));
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistSkillGroupGrouping") != m.end() && !m["ExistSkillGroupGrouping"].empty()) {
      existSkillGroupGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistSkillGroupGrouping"]));
    }
  }


  virtual ~GetOnlineServiceVolumeShrinkRequest() = default;
};
class GetOnlineServiceVolumeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<string> rows{};

  GetOnlineServiceVolumeResponseBodyData() {}

  explicit GetOnlineServiceVolumeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<string>(boost::any_cast<string>(m["Rows"]));
    }
  }


  virtual ~GetOnlineServiceVolumeResponseBodyData() = default;
};
class GetOnlineServiceVolumeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};
  shared_ptr<GetOnlineServiceVolumeResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetOnlineServiceVolumeResponseBody() {}

  explicit GetOnlineServiceVolumeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetOnlineServiceVolumeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetOnlineServiceVolumeResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetOnlineServiceVolumeResponseBody() = default;
};
class GetOnlineServiceVolumeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOnlineServiceVolumeResponseBody> body{};

  GetOnlineServiceVolumeResponse() {}

  explicit GetOnlineServiceVolumeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetOnlineServiceVolumeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOnlineServiceVolumeResponseBody>(model1);
      }
    }
  }


  virtual ~GetOnlineServiceVolumeResponse() = default;
};
class DeleteOutboundTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> outboundTaskId{};
  shared_ptr<string> instanceId{};

  DeleteOutboundTaskRequest() {}

  explicit DeleteOutboundTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outboundTaskId) {
      res["OutboundTaskId"] = boost::any(*outboundTaskId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutboundTaskId") != m.end() && !m["OutboundTaskId"].empty()) {
      outboundTaskId = make_shared<long>(boost::any_cast<long>(m["OutboundTaskId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DeleteOutboundTaskRequest() = default;
};
class DeleteOutboundTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DeleteOutboundTaskResponseBody() {}

  explicit DeleteOutboundTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteOutboundTaskResponseBody() = default;
};
class DeleteOutboundTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteOutboundTaskResponseBody> body{};

  DeleteOutboundTaskResponse() {}

  explicit DeleteOutboundTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteOutboundTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteOutboundTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteOutboundTaskResponse() = default;
};
class AddOuterAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> outerAccountId{};
  shared_ptr<string> outerAccountType{};
  shared_ptr<string> outerAccountName{};
  shared_ptr<string> avatar{};
  shared_ptr<string> realName{};
  shared_ptr<string> outerDepartmentId{};
  shared_ptr<string> outerGroupIds{};
  shared_ptr<string> ext{};
  shared_ptr<string> outerDepartmentType{};
  shared_ptr<string> outerGroupType{};

  AddOuterAccountRequest() {}

  explicit AddOuterAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outerAccountId) {
      res["OuterAccountId"] = boost::any(*outerAccountId);
    }
    if (outerAccountType) {
      res["OuterAccountType"] = boost::any(*outerAccountType);
    }
    if (outerAccountName) {
      res["OuterAccountName"] = boost::any(*outerAccountName);
    }
    if (avatar) {
      res["Avatar"] = boost::any(*avatar);
    }
    if (realName) {
      res["RealName"] = boost::any(*realName);
    }
    if (outerDepartmentId) {
      res["OuterDepartmentId"] = boost::any(*outerDepartmentId);
    }
    if (outerGroupIds) {
      res["OuterGroupIds"] = boost::any(*outerGroupIds);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (outerDepartmentType) {
      res["OuterDepartmentType"] = boost::any(*outerDepartmentType);
    }
    if (outerGroupType) {
      res["OuterGroupType"] = boost::any(*outerGroupType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OuterAccountId") != m.end() && !m["OuterAccountId"].empty()) {
      outerAccountId = make_shared<string>(boost::any_cast<string>(m["OuterAccountId"]));
    }
    if (m.find("OuterAccountType") != m.end() && !m["OuterAccountType"].empty()) {
      outerAccountType = make_shared<string>(boost::any_cast<string>(m["OuterAccountType"]));
    }
    if (m.find("OuterAccountName") != m.end() && !m["OuterAccountName"].empty()) {
      outerAccountName = make_shared<string>(boost::any_cast<string>(m["OuterAccountName"]));
    }
    if (m.find("Avatar") != m.end() && !m["Avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["Avatar"]));
    }
    if (m.find("RealName") != m.end() && !m["RealName"].empty()) {
      realName = make_shared<string>(boost::any_cast<string>(m["RealName"]));
    }
    if (m.find("OuterDepartmentId") != m.end() && !m["OuterDepartmentId"].empty()) {
      outerDepartmentId = make_shared<string>(boost::any_cast<string>(m["OuterDepartmentId"]));
    }
    if (m.find("OuterGroupIds") != m.end() && !m["OuterGroupIds"].empty()) {
      outerGroupIds = make_shared<string>(boost::any_cast<string>(m["OuterGroupIds"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("OuterDepartmentType") != m.end() && !m["OuterDepartmentType"].empty()) {
      outerDepartmentType = make_shared<string>(boost::any_cast<string>(m["OuterDepartmentType"]));
    }
    if (m.find("OuterGroupType") != m.end() && !m["OuterGroupType"].empty()) {
      outerGroupType = make_shared<string>(boost::any_cast<string>(m["OuterGroupType"]));
    }
  }


  virtual ~AddOuterAccountRequest() = default;
};
class AddOuterAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  AddOuterAccountResponseBody() {}

  explicit AddOuterAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddOuterAccountResponseBody() = default;
};
class AddOuterAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddOuterAccountResponseBody> body{};

  AddOuterAccountResponse() {}

  explicit AddOuterAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddOuterAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddOuterAccountResponseBody>(model1);
      }
    }
  }


  virtual ~AddOuterAccountResponse() = default;
};
class GetAgentByIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> agentId{};

  GetAgentByIdRequest() {}

  explicit GetAgentByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<long>(boost::any_cast<long>(m["AgentId"]));
    }
  }


  virtual ~GetAgentByIdRequest() = default;
};
class GetAgentByIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> showName{};
  shared_ptr<string> foreignKey{};
  shared_ptr<long> servicerType{};
  shared_ptr<string> realName{};
  shared_ptr<string> createUserName{};
  shared_ptr<long> agentId{};
  shared_ptr<string> foreignNick{};

  GetAgentByIdResponseBodyData() {}

  explicit GetAgentByIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (showName) {
      res["ShowName"] = boost::any(*showName);
    }
    if (foreignKey) {
      res["ForeignKey"] = boost::any(*foreignKey);
    }
    if (servicerType) {
      res["ServicerType"] = boost::any(*servicerType);
    }
    if (realName) {
      res["RealName"] = boost::any(*realName);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (foreignNick) {
      res["ForeignNick"] = boost::any(*foreignNick);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShowName") != m.end() && !m["ShowName"].empty()) {
      showName = make_shared<string>(boost::any_cast<string>(m["ShowName"]));
    }
    if (m.find("ForeignKey") != m.end() && !m["ForeignKey"].empty()) {
      foreignKey = make_shared<string>(boost::any_cast<string>(m["ForeignKey"]));
    }
    if (m.find("ServicerType") != m.end() && !m["ServicerType"].empty()) {
      servicerType = make_shared<long>(boost::any_cast<long>(m["ServicerType"]));
    }
    if (m.find("RealName") != m.end() && !m["RealName"].empty()) {
      realName = make_shared<string>(boost::any_cast<string>(m["RealName"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<long>(boost::any_cast<long>(m["AgentId"]));
    }
    if (m.find("ForeignNick") != m.end() && !m["ForeignNick"].empty()) {
      foreignNick = make_shared<string>(boost::any_cast<string>(m["ForeignNick"]));
    }
  }


  virtual ~GetAgentByIdResponseBodyData() = default;
};
class GetAgentByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetAgentByIdResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetAgentByIdResponseBody() {}

  explicit GetAgentByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAgentByIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAgentByIdResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetAgentByIdResponseBody() = default;
};
class GetAgentByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAgentByIdResponseBody> body{};

  GetAgentByIdResponse() {}

  explicit GetAgentByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAgentByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAgentByIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetAgentByIdResponse() = default;
};
class GetQualityRuleDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> qualityRuleId{};

  GetQualityRuleDetailRequest() {}

  explicit GetQualityRuleDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (qualityRuleId) {
      res["QualityRuleId"] = boost::any(*qualityRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("QualityRuleId") != m.end() && !m["QualityRuleId"].empty()) {
      qualityRuleId = make_shared<long>(boost::any_cast<long>(m["QualityRuleId"]));
    }
  }


  virtual ~GetQualityRuleDetailRequest() = default;
};
class GetQualityRuleDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> ruleTag{};
  shared_ptr<vector<string>> keyWords{};
  shared_ptr<long> matchType{};
  shared_ptr<string> name{};
  shared_ptr<string> ruleCreateTime{};
  shared_ptr<long> ruleId{};

  GetQualityRuleDetailResponseBodyData() {}

  explicit GetQualityRuleDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleTag) {
      res["RuleTag"] = boost::any(*ruleTag);
    }
    if (keyWords) {
      res["KeyWords"] = boost::any(*keyWords);
    }
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ruleCreateTime) {
      res["RuleCreateTime"] = boost::any(*ruleCreateTime);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleTag") != m.end() && !m["RuleTag"].empty()) {
      ruleTag = make_shared<long>(boost::any_cast<long>(m["RuleTag"]));
    }
    if (m.find("KeyWords") != m.end() && !m["KeyWords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["KeyWords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["KeyWords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keyWords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<long>(boost::any_cast<long>(m["MatchType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RuleCreateTime") != m.end() && !m["RuleCreateTime"].empty()) {
      ruleCreateTime = make_shared<string>(boost::any_cast<string>(m["RuleCreateTime"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~GetQualityRuleDetailResponseBodyData() = default;
};
class GetQualityRuleDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetQualityRuleDetailResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetQualityRuleDetailResponseBody() {}

  explicit GetQualityRuleDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetQualityRuleDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetQualityRuleDetailResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetQualityRuleDetailResponseBody() = default;
};
class GetQualityRuleDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetQualityRuleDetailResponseBody> body{};

  GetQualityRuleDetailResponse() {}

  explicit GetQualityRuleDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetQualityRuleDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQualityRuleDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetQualityRuleDetailResponse() = default;
};
class GetQualityProjectLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> projectId{};

  GetQualityProjectLogRequest() {}

  explicit GetQualityProjectLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~GetQualityProjectLogRequest() = default;
};
class GetQualityProjectLogResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> actionType{};
  shared_ptr<string> actionData{};
  shared_ptr<long> projectId{};
  shared_ptr<string> projectCreateTime{};
  shared_ptr<string> actionTime{};

  GetQualityProjectLogResponseBodyData() {}

  explicit GetQualityProjectLogResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (actionData) {
      res["ActionData"] = boost::any(*actionData);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectCreateTime) {
      res["ProjectCreateTime"] = boost::any(*projectCreateTime);
    }
    if (actionTime) {
      res["ActionTime"] = boost::any(*actionTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("ActionData") != m.end() && !m["ActionData"].empty()) {
      actionData = make_shared<string>(boost::any_cast<string>(m["ActionData"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("ProjectCreateTime") != m.end() && !m["ProjectCreateTime"].empty()) {
      projectCreateTime = make_shared<string>(boost::any_cast<string>(m["ProjectCreateTime"]));
    }
    if (m.find("ActionTime") != m.end() && !m["ActionTime"].empty()) {
      actionTime = make_shared<string>(boost::any_cast<string>(m["ActionTime"]));
    }
  }


  virtual ~GetQualityProjectLogResponseBodyData() = default;
};
class GetQualityProjectLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetQualityProjectLogResponseBodyData>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetQualityProjectLogResponseBody() {}

  explicit GetQualityProjectLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetQualityProjectLogResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQualityProjectLogResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetQualityProjectLogResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetQualityProjectLogResponseBody() = default;
};
class GetQualityProjectLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetQualityProjectLogResponseBody> body{};

  GetQualityProjectLogResponse() {}

  explicit GetQualityProjectLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetQualityProjectLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQualityProjectLogResponseBody>(model1);
      }
    }
  }


  virtual ~GetQualityProjectLogResponse() = default;
};
class ListHotlineRecordDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> closeTimeEnd{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> closeTimeStart{};

  ListHotlineRecordDetailRequest() {}

  explicit ListHotlineRecordDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (closeTimeEnd) {
      res["CloseTimeEnd"] = boost::any(*closeTimeEnd);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (closeTimeStart) {
      res["CloseTimeStart"] = boost::any(*closeTimeStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("CloseTimeEnd") != m.end() && !m["CloseTimeEnd"].empty()) {
      closeTimeEnd = make_shared<long>(boost::any_cast<long>(m["CloseTimeEnd"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CloseTimeStart") != m.end() && !m["CloseTimeStart"].empty()) {
      closeTimeStart = make_shared<long>(boost::any_cast<long>(m["CloseTimeStart"]));
    }
  }


  virtual ~ListHotlineRecordDetailRequest() = default;
};
class ListHotlineRecordDetailResponseBodyResultDataData : public Darabonba::Model {
public:
  shared_ptr<string> servicerName{};
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> ossUrl{};

  ListHotlineRecordDetailResponseBodyResultDataData() {}

  explicit ListHotlineRecordDetailResponseBodyResultDataData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (servicerName) {
      res["ServicerName"] = boost::any(*servicerName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ossUrl) {
      res["OssUrl"] = boost::any(*ossUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServicerName") != m.end() && !m["ServicerName"].empty()) {
      servicerName = make_shared<string>(boost::any_cast<string>(m["ServicerName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("OssUrl") != m.end() && !m["OssUrl"].empty()) {
      ossUrl = make_shared<string>(boost::any_cast<string>(m["OssUrl"]));
    }
  }


  virtual ~ListHotlineRecordDetailResponseBodyResultDataData() = default;
};
class ListHotlineRecordDetailResponseBodyResultData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> totalResults{};
  shared_ptr<long> totalPage{};
  shared_ptr<long> onePageSize{};
  shared_ptr<vector<ListHotlineRecordDetailResponseBodyResultDataData>> data{};

  ListHotlineRecordDetailResponseBodyResultData() {}

  explicit ListHotlineRecordDetailResponseBodyResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (totalResults) {
      res["TotalResults"] = boost::any(*totalResults);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (onePageSize) {
      res["OnePageSize"] = boost::any(*onePageSize);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("TotalResults") != m.end() && !m["TotalResults"].empty()) {
      totalResults = make_shared<long>(boost::any_cast<long>(m["TotalResults"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("OnePageSize") != m.end() && !m["OnePageSize"].empty()) {
      onePageSize = make_shared<long>(boost::any_cast<long>(m["OnePageSize"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListHotlineRecordDetailResponseBodyResultDataData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHotlineRecordDetailResponseBodyResultDataData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListHotlineRecordDetailResponseBodyResultDataData>>(expect1);
      }
    }
  }


  virtual ~ListHotlineRecordDetailResponseBodyResultData() = default;
};
class ListHotlineRecordDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<ListHotlineRecordDetailResponseBodyResultData> resultData{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ListHotlineRecordDetailResponseBody() {}

  explicit ListHotlineRecordDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (resultData) {
      res["ResultData"] = resultData ? boost::any(resultData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("ResultData") != m.end() && !m["ResultData"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultData"].type()) {
        ListHotlineRecordDetailResponseBodyResultData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultData"]));
        resultData = make_shared<ListHotlineRecordDetailResponseBodyResultData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListHotlineRecordDetailResponseBody() = default;
};
class ListHotlineRecordDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHotlineRecordDetailResponseBody> body{};

  ListHotlineRecordDetailResponse() {}

  explicit ListHotlineRecordDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHotlineRecordDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHotlineRecordDetailResponseBody>(model1);
      }
    }
  }


  virtual ~ListHotlineRecordDetailResponse() = default;
};
class GetHotlineMessageLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> acid{};

  GetHotlineMessageLogRequest() {}

  explicit GetHotlineMessageLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (acid) {
      res["Acid"] = boost::any(*acid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Acid") != m.end() && !m["Acid"].empty()) {
      acid = make_shared<string>(boost::any_cast<string>(m["Acid"]));
    }
  }


  virtual ~GetHotlineMessageLogRequest() = default;
};
class GetHotlineMessageLogResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> acid{};
  shared_ptr<long> senderType{};
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> mid{};
  shared_ptr<string> content{};

  GetHotlineMessageLogResponseBodyData() {}

  explicit GetHotlineMessageLogResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acid) {
      res["Acid"] = boost::any(*acid);
    }
    if (senderType) {
      res["SenderType"] = boost::any(*senderType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (mid) {
      res["Mid"] = boost::any(*mid);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Acid") != m.end() && !m["Acid"].empty()) {
      acid = make_shared<string>(boost::any_cast<string>(m["Acid"]));
    }
    if (m.find("SenderType") != m.end() && !m["SenderType"].empty()) {
      senderType = make_shared<long>(boost::any_cast<long>(m["SenderType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Mid") != m.end() && !m["Mid"].empty()) {
      mid = make_shared<string>(boost::any_cast<string>(m["Mid"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~GetHotlineMessageLogResponseBodyData() = default;
};
class GetHotlineMessageLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<GetHotlineMessageLogResponseBodyData>> data{};

  GetHotlineMessageLogResponseBody() {}

  explicit GetHotlineMessageLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetHotlineMessageLogResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHotlineMessageLogResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetHotlineMessageLogResponseBodyData>>(expect1);
      }
    }
  }


  virtual ~GetHotlineMessageLogResponseBody() = default;
};
class GetHotlineMessageLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHotlineMessageLogResponseBody> body{};

  GetHotlineMessageLogResponse() {}

  explicit GetHotlineMessageLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHotlineMessageLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotlineMessageLogResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotlineMessageLogResponse() = default;
};
class GetQualityProjectListRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<long> status{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> checkFreqType{};

  GetQualityProjectListRequest() {}

  explicit GetQualityProjectListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (checkFreqType) {
      res["checkFreqType"] = boost::any(*checkFreqType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("checkFreqType") != m.end() && !m["checkFreqType"].empty()) {
      checkFreqType = make_shared<long>(boost::any_cast<long>(m["checkFreqType"]));
    }
  }


  virtual ~GetQualityProjectListRequest() = default;
};
class GetQualityProjectListResponseBodyDataQualityProjectList : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<long> qualityType{};
  shared_ptr<vector<long>> qualityRuleIds{};
  shared_ptr<string> createTime{};
  shared_ptr<string> projectName{};
  shared_ptr<long> checkFreqType{};
  shared_ptr<vector<long>> depList{};
  shared_ptr<vector<long>> servicerList{};
  shared_ptr<long> version{};
  shared_ptr<vector<long>> groupList{};
  shared_ptr<long> id{};
  shared_ptr<string> modifyTime{};

  GetQualityProjectListResponseBodyDataQualityProjectList() {}

  explicit GetQualityProjectListResponseBodyDataQualityProjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (qualityType) {
      res["QualityType"] = boost::any(*qualityType);
    }
    if (qualityRuleIds) {
      res["QualityRuleIds"] = boost::any(*qualityRuleIds);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (checkFreqType) {
      res["CheckFreqType"] = boost::any(*checkFreqType);
    }
    if (depList) {
      res["DepList"] = boost::any(*depList);
    }
    if (servicerList) {
      res["ServicerList"] = boost::any(*servicerList);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (groupList) {
      res["GroupList"] = boost::any(*groupList);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("QualityType") != m.end() && !m["QualityType"].empty()) {
      qualityType = make_shared<long>(boost::any_cast<long>(m["QualityType"]));
    }
    if (m.find("QualityRuleIds") != m.end() && !m["QualityRuleIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["QualityRuleIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["QualityRuleIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      qualityRuleIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("CheckFreqType") != m.end() && !m["CheckFreqType"].empty()) {
      checkFreqType = make_shared<long>(boost::any_cast<long>(m["CheckFreqType"]));
    }
    if (m.find("DepList") != m.end() && !m["DepList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DepList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      depList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ServicerList") != m.end() && !m["ServicerList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ServicerList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServicerList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      servicerList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
    if (m.find("GroupList") != m.end() && !m["GroupList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["GroupList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      groupList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
  }


  virtual ~GetQualityProjectListResponseBodyDataQualityProjectList() = default;
};
class GetQualityProjectListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetQualityProjectListResponseBodyDataQualityProjectList>> qualityProjectList{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  GetQualityProjectListResponseBodyData() {}

  explicit GetQualityProjectListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualityProjectList) {
      vector<boost::any> temp1;
      for(auto item1:*qualityProjectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QualityProjectList"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QualityProjectList") != m.end() && !m["QualityProjectList"].empty()) {
      if (typeid(vector<boost::any>) == m["QualityProjectList"].type()) {
        vector<GetQualityProjectListResponseBodyDataQualityProjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QualityProjectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQualityProjectListResponseBodyDataQualityProjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        qualityProjectList = make_shared<vector<GetQualityProjectListResponseBodyDataQualityProjectList>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetQualityProjectListResponseBodyData() = default;
};
class GetQualityProjectListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetQualityProjectListResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetQualityProjectListResponseBody() {}

  explicit GetQualityProjectListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetQualityProjectListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetQualityProjectListResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetQualityProjectListResponseBody() = default;
};
class GetQualityProjectListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetQualityProjectListResponseBody> body{};

  GetQualityProjectListResponse() {}

  explicit GetQualityProjectListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetQualityProjectListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQualityProjectListResponseBody>(model1);
      }
    }
  }


  virtual ~GetQualityProjectListResponse() = default;
};
class CreateOutboundTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> taskType{};
  shared_ptr<string> taskName{};
  shared_ptr<string> description{};
  shared_ptr<string> startDate{};
  shared_ptr<string> endDate{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> retryTime{};
  shared_ptr<long> retryInterval{};
  shared_ptr<long> skillGroup{};
  shared_ptr<string> ani{};
  shared_ptr<string> groupName{};
  shared_ptr<long> model{};
  shared_ptr<long> departmentId{};
  shared_ptr<string> extAttrs{};
  shared_ptr<string> callInfos{};
  shared_ptr<string> instanceId{};

  CreateOutboundTaskRequest() {}

  explicit CreateOutboundTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (retryTime) {
      res["RetryTime"] = boost::any(*retryTime);
    }
    if (retryInterval) {
      res["RetryInterval"] = boost::any(*retryInterval);
    }
    if (skillGroup) {
      res["SkillGroup"] = boost::any(*skillGroup);
    }
    if (ani) {
      res["Ani"] = boost::any(*ani);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (extAttrs) {
      res["ExtAttrs"] = boost::any(*extAttrs);
    }
    if (callInfos) {
      res["CallInfos"] = boost::any(*callInfos);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<long>(boost::any_cast<long>(m["TaskType"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RetryTime") != m.end() && !m["RetryTime"].empty()) {
      retryTime = make_shared<long>(boost::any_cast<long>(m["RetryTime"]));
    }
    if (m.find("RetryInterval") != m.end() && !m["RetryInterval"].empty()) {
      retryInterval = make_shared<long>(boost::any_cast<long>(m["RetryInterval"]));
    }
    if (m.find("SkillGroup") != m.end() && !m["SkillGroup"].empty()) {
      skillGroup = make_shared<long>(boost::any_cast<long>(m["SkillGroup"]));
    }
    if (m.find("Ani") != m.end() && !m["Ani"].empty()) {
      ani = make_shared<string>(boost::any_cast<string>(m["Ani"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<long>(boost::any_cast<long>(m["Model"]));
    }
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<long>(boost::any_cast<long>(m["DepartmentId"]));
    }
    if (m.find("ExtAttrs") != m.end() && !m["ExtAttrs"].empty()) {
      extAttrs = make_shared<string>(boost::any_cast<string>(m["ExtAttrs"]));
    }
    if (m.find("CallInfos") != m.end() && !m["CallInfos"].empty()) {
      callInfos = make_shared<string>(boost::any_cast<string>(m["CallInfos"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CreateOutboundTaskRequest() = default;
};
class CreateOutboundTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  CreateOutboundTaskResponseBody() {}

  explicit CreateOutboundTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateOutboundTaskResponseBody() = default;
};
class CreateOutboundTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateOutboundTaskResponseBody> body{};

  CreateOutboundTaskResponse() {}

  explicit CreateOutboundTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateOutboundTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOutboundTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateOutboundTaskResponse() = default;
};
class GetHotlineRuntimeInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  GetHotlineRuntimeInfoRequest() {}

  explicit GetHotlineRuntimeInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~GetHotlineRuntimeInfoRequest() = default;
};
class GetHotlineRuntimeInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<map<string, boost::any>> data{};

  GetHotlineRuntimeInfoResponseBody() {}

  explicit GetHotlineRuntimeInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetHotlineRuntimeInfoResponseBody() = default;
};
class GetHotlineRuntimeInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHotlineRuntimeInfoResponseBody> body{};

  GetHotlineRuntimeInfoResponse() {}

  explicit GetHotlineRuntimeInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHotlineRuntimeInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotlineRuntimeInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotlineRuntimeInfoResponse() = default;
};
class MakeDoubleCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> servicerPhone{};
  shared_ptr<string> memberPhone{};
  shared_ptr<string> outboundCallNumber{};
  shared_ptr<string> bizData{};

  MakeDoubleCallRequest() {}

  explicit MakeDoubleCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (servicerPhone) {
      res["ServicerPhone"] = boost::any(*servicerPhone);
    }
    if (memberPhone) {
      res["MemberPhone"] = boost::any(*memberPhone);
    }
    if (outboundCallNumber) {
      res["OutboundCallNumber"] = boost::any(*outboundCallNumber);
    }
    if (bizData) {
      res["BizData"] = boost::any(*bizData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("ServicerPhone") != m.end() && !m["ServicerPhone"].empty()) {
      servicerPhone = make_shared<string>(boost::any_cast<string>(m["ServicerPhone"]));
    }
    if (m.find("MemberPhone") != m.end() && !m["MemberPhone"].empty()) {
      memberPhone = make_shared<string>(boost::any_cast<string>(m["MemberPhone"]));
    }
    if (m.find("OutboundCallNumber") != m.end() && !m["OutboundCallNumber"].empty()) {
      outboundCallNumber = make_shared<string>(boost::any_cast<string>(m["OutboundCallNumber"]));
    }
    if (m.find("BizData") != m.end() && !m["BizData"].empty()) {
      bizData = make_shared<string>(boost::any_cast<string>(m["BizData"]));
    }
  }


  virtual ~MakeDoubleCallRequest() = default;
};
class MakeDoubleCallResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> acid{};

  MakeDoubleCallResponseBodyData() {}

  explicit MakeDoubleCallResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acid) {
      res["Acid"] = boost::any(*acid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Acid") != m.end() && !m["Acid"].empty()) {
      acid = make_shared<string>(boost::any_cast<string>(m["Acid"]));
    }
  }


  virtual ~MakeDoubleCallResponseBodyData() = default;
};
class MakeDoubleCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<MakeDoubleCallResponseBodyData> data{};

  MakeDoubleCallResponseBody() {}

  explicit MakeDoubleCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        MakeDoubleCallResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<MakeDoubleCallResponseBodyData>(model1);
      }
    }
  }


  virtual ~MakeDoubleCallResponseBody() = default;
};
class MakeDoubleCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<MakeDoubleCallResponseBody> body{};

  MakeDoubleCallResponse() {}

  explicit MakeDoubleCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MakeDoubleCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MakeDoubleCallResponseBody>(model1);
      }
    }
  }


  virtual ~MakeDoubleCallResponse() = default;
};
class GetSkillGroupAgentStatusDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<long>> depIds{};
  shared_ptr<vector<long>> groupIds{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existSkillGroupGrouping{};

  GetSkillGroupAgentStatusDetailsRequest() {}

  explicit GetSkillGroupAgentStatusDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existSkillGroupGrouping) {
      res["ExistSkillGroupGrouping"] = boost::any(*existSkillGroupGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DepIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      depIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      groupIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistSkillGroupGrouping") != m.end() && !m["ExistSkillGroupGrouping"].empty()) {
      existSkillGroupGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistSkillGroupGrouping"]));
    }
  }


  virtual ~GetSkillGroupAgentStatusDetailsRequest() = default;
};
class GetSkillGroupAgentStatusDetailsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> depIdsShrink{};
  shared_ptr<string> groupIdsShrink{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existSkillGroupGrouping{};

  GetSkillGroupAgentStatusDetailsShrinkRequest() {}

  explicit GetSkillGroupAgentStatusDetailsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (depIdsShrink) {
      res["DepIds"] = boost::any(*depIdsShrink);
    }
    if (groupIdsShrink) {
      res["GroupIds"] = boost::any(*groupIdsShrink);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existSkillGroupGrouping) {
      res["ExistSkillGroupGrouping"] = boost::any(*existSkillGroupGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      depIdsShrink = make_shared<string>(boost::any_cast<string>(m["DepIds"]));
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      groupIdsShrink = make_shared<string>(boost::any_cast<string>(m["GroupIds"]));
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistSkillGroupGrouping") != m.end() && !m["ExistSkillGroupGrouping"].empty()) {
      existSkillGroupGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistSkillGroupGrouping"]));
    }
  }


  virtual ~GetSkillGroupAgentStatusDetailsShrinkRequest() = default;
};
class GetSkillGroupAgentStatusDetailsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<string> rows{};

  GetSkillGroupAgentStatusDetailsResponseBodyData() {}

  explicit GetSkillGroupAgentStatusDetailsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<string>(boost::any_cast<string>(m["Rows"]));
    }
  }


  virtual ~GetSkillGroupAgentStatusDetailsResponseBodyData() = default;
};
class GetSkillGroupAgentStatusDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};
  shared_ptr<GetSkillGroupAgentStatusDetailsResponseBodyData> data{};

  GetSkillGroupAgentStatusDetailsResponseBody() {}

  explicit GetSkillGroupAgentStatusDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSkillGroupAgentStatusDetailsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSkillGroupAgentStatusDetailsResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetSkillGroupAgentStatusDetailsResponseBody() = default;
};
class GetSkillGroupAgentStatusDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSkillGroupAgentStatusDetailsResponseBody> body{};

  GetSkillGroupAgentStatusDetailsResponse() {}

  explicit GetSkillGroupAgentStatusDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSkillGroupAgentStatusDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSkillGroupAgentStatusDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~GetSkillGroupAgentStatusDetailsResponse() = default;
};
class GetAgentServiceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<long>> agentIds{};
  shared_ptr<vector<long>> depIds{};
  shared_ptr<string> timeLatitudeType{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existAgentGrouping{};

  GetAgentServiceStatusRequest() {}

  explicit GetAgentServiceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (agentIds) {
      res["AgentIds"] = boost::any(*agentIds);
    }
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    if (timeLatitudeType) {
      res["TimeLatitudeType"] = boost::any(*timeLatitudeType);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existAgentGrouping) {
      res["ExistAgentGrouping"] = boost::any(*existAgentGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("AgentIds") != m.end() && !m["AgentIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AgentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AgentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      agentIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DepIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      depIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("TimeLatitudeType") != m.end() && !m["TimeLatitudeType"].empty()) {
      timeLatitudeType = make_shared<string>(boost::any_cast<string>(m["TimeLatitudeType"]));
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistAgentGrouping") != m.end() && !m["ExistAgentGrouping"].empty()) {
      existAgentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistAgentGrouping"]));
    }
  }


  virtual ~GetAgentServiceStatusRequest() = default;
};
class GetAgentServiceStatusShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> agentIdsShrink{};
  shared_ptr<string> depIdsShrink{};
  shared_ptr<string> timeLatitudeType{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existAgentGrouping{};

  GetAgentServiceStatusShrinkRequest() {}

  explicit GetAgentServiceStatusShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (agentIdsShrink) {
      res["AgentIds"] = boost::any(*agentIdsShrink);
    }
    if (depIdsShrink) {
      res["DepIds"] = boost::any(*depIdsShrink);
    }
    if (timeLatitudeType) {
      res["TimeLatitudeType"] = boost::any(*timeLatitudeType);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existAgentGrouping) {
      res["ExistAgentGrouping"] = boost::any(*existAgentGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("AgentIds") != m.end() && !m["AgentIds"].empty()) {
      agentIdsShrink = make_shared<string>(boost::any_cast<string>(m["AgentIds"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      depIdsShrink = make_shared<string>(boost::any_cast<string>(m["DepIds"]));
    }
    if (m.find("TimeLatitudeType") != m.end() && !m["TimeLatitudeType"].empty()) {
      timeLatitudeType = make_shared<string>(boost::any_cast<string>(m["TimeLatitudeType"]));
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistAgentGrouping") != m.end() && !m["ExistAgentGrouping"].empty()) {
      existAgentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistAgentGrouping"]));
    }
  }


  virtual ~GetAgentServiceStatusShrinkRequest() = default;
};
class GetAgentServiceStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<string> rows{};

  GetAgentServiceStatusResponseBodyData() {}

  explicit GetAgentServiceStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<string>(boost::any_cast<string>(m["Rows"]));
    }
  }


  virtual ~GetAgentServiceStatusResponseBodyData() = default;
};
class GetAgentServiceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetAgentServiceStatusResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetAgentServiceStatusResponseBody() {}

  explicit GetAgentServiceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAgentServiceStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAgentServiceStatusResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetAgentServiceStatusResponseBody() = default;
};
class GetAgentServiceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAgentServiceStatusResponseBody> body{};

  GetAgentServiceStatusResponse() {}

  explicit GetAgentServiceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAgentServiceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAgentServiceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetAgentServiceStatusResponse() = default;
};
class GetNumLocationRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> phoneNum{};

  GetNumLocationRequest() {}

  explicit GetNumLocationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (phoneNum) {
      res["PhoneNum"] = boost::any(*phoneNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PhoneNum") != m.end() && !m["PhoneNum"].empty()) {
      phoneNum = make_shared<string>(boost::any_cast<string>(m["PhoneNum"]));
    }
  }


  virtual ~GetNumLocationRequest() = default;
};
class GetNumLocationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetNumLocationResponseBody() {}

  explicit GetNumLocationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetNumLocationResponseBody() = default;
};
class GetNumLocationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetNumLocationResponseBody> body{};

  GetNumLocationResponse() {}

  explicit GetNumLocationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetNumLocationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNumLocationResponseBody>(model1);
      }
    }
  }


  virtual ~GetNumLocationResponse() = default;
};
class GetQualityRuleListRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  GetQualityRuleListRequest() {}

  explicit GetQualityRuleListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~GetQualityRuleListRequest() = default;
};
class GetQualityRuleListResponseBodyDataQualityRuleList : public Darabonba::Model {
public:
  shared_ptr<long> ruleTag{};
  shared_ptr<vector<string>> keyWords{};
  shared_ptr<long> matchType{};
  shared_ptr<string> name{};
  shared_ptr<string> ruleCreateTime{};
  shared_ptr<long> ruleId{};

  GetQualityRuleListResponseBodyDataQualityRuleList() {}

  explicit GetQualityRuleListResponseBodyDataQualityRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleTag) {
      res["RuleTag"] = boost::any(*ruleTag);
    }
    if (keyWords) {
      res["KeyWords"] = boost::any(*keyWords);
    }
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ruleCreateTime) {
      res["RuleCreateTime"] = boost::any(*ruleCreateTime);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleTag") != m.end() && !m["RuleTag"].empty()) {
      ruleTag = make_shared<long>(boost::any_cast<long>(m["RuleTag"]));
    }
    if (m.find("KeyWords") != m.end() && !m["KeyWords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["KeyWords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["KeyWords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keyWords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<long>(boost::any_cast<long>(m["MatchType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RuleCreateTime") != m.end() && !m["RuleCreateTime"].empty()) {
      ruleCreateTime = make_shared<string>(boost::any_cast<string>(m["RuleCreateTime"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~GetQualityRuleListResponseBodyDataQualityRuleList() = default;
};
class GetQualityRuleListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<vector<GetQualityRuleListResponseBodyDataQualityRuleList>> qualityRuleList{};

  GetQualityRuleListResponseBodyData() {}

  explicit GetQualityRuleListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (qualityRuleList) {
      vector<boost::any> temp1;
      for(auto item1:*qualityRuleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QualityRuleList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("QualityRuleList") != m.end() && !m["QualityRuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["QualityRuleList"].type()) {
        vector<GetQualityRuleListResponseBodyDataQualityRuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QualityRuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQualityRuleListResponseBodyDataQualityRuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        qualityRuleList = make_shared<vector<GetQualityRuleListResponseBodyDataQualityRuleList>>(expect1);
      }
    }
  }


  virtual ~GetQualityRuleListResponseBodyData() = default;
};
class GetQualityRuleListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetQualityRuleListResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetQualityRuleListResponseBody() {}

  explicit GetQualityRuleListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetQualityRuleListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetQualityRuleListResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetQualityRuleListResponseBody() = default;
};
class GetQualityRuleListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetQualityRuleListResponseBody> body{};

  GetQualityRuleListResponse() {}

  explicit GetQualityRuleListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetQualityRuleListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQualityRuleListResponseBody>(model1);
      }
    }
  }


  virtual ~GetQualityRuleListResponse() = default;
};
class ListOutboundPhoneNumberRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  ListOutboundPhoneNumberRequest() {}

  explicit ListOutboundPhoneNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~ListOutboundPhoneNumberRequest() = default;
};
class ListOutboundPhoneNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ListOutboundPhoneNumberResponseBody() {}

  explicit ListOutboundPhoneNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListOutboundPhoneNumberResponseBody() = default;
};
class ListOutboundPhoneNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListOutboundPhoneNumberResponseBody> body{};

  ListOutboundPhoneNumberResponse() {}

  explicit ListOutboundPhoneNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListOutboundPhoneNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOutboundPhoneNumberResponseBody>(model1);
      }
    }
  }


  virtual ~ListOutboundPhoneNumberResponse() = default;
};
class ListAgentBySkillGroupIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> skillGroupId{};

  ListAgentBySkillGroupIdRequest() {}

  explicit ListAgentBySkillGroupIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<long>(boost::any_cast<long>(m["SkillGroupId"]));
    }
  }


  virtual ~ListAgentBySkillGroupIdRequest() = default;
};
class ListAgentBySkillGroupIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> displayName{};
  shared_ptr<long> agentId{};
  shared_ptr<string> accountName{};
  shared_ptr<long> tenantId{};

  ListAgentBySkillGroupIdResponseBodyData() {}

  explicit ListAgentBySkillGroupIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<long>(boost::any_cast<long>(m["AgentId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~ListAgentBySkillGroupIdResponseBodyData() = default;
};
class ListAgentBySkillGroupIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListAgentBySkillGroupIdResponseBodyData>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ListAgentBySkillGroupIdResponseBody() {}

  explicit ListAgentBySkillGroupIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAgentBySkillGroupIdResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAgentBySkillGroupIdResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAgentBySkillGroupIdResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListAgentBySkillGroupIdResponseBody() = default;
};
class ListAgentBySkillGroupIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAgentBySkillGroupIdResponseBody> body{};

  ListAgentBySkillGroupIdResponse() {}

  explicit ListAgentBySkillGroupIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAgentBySkillGroupIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAgentBySkillGroupIdResponseBody>(model1);
      }
    }
  }


  virtual ~ListAgentBySkillGroupIdResponse() = default;
};
class HangupThirdCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> callId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> connectionId{};

  HangupThirdCallRequest() {}

  explicit HangupThirdCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
  }


  virtual ~HangupThirdCallRequest() = default;
};
class HangupThirdCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  HangupThirdCallResponseBody() {}

  explicit HangupThirdCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~HangupThirdCallResponseBody() = default;
};
class HangupThirdCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<HangupThirdCallResponseBody> body{};

  HangupThirdCallResponse() {}

  explicit HangupThirdCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        HangupThirdCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HangupThirdCallResponseBody>(model1);
      }
    }
  }


  virtual ~HangupThirdCallResponse() = default;
};
class StartHotlineServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  StartHotlineServiceRequest() {}

  explicit StartHotlineServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~StartHotlineServiceRequest() = default;
};
class StartHotlineServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  StartHotlineServiceResponseBody() {}

  explicit StartHotlineServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~StartHotlineServiceResponseBody() = default;
};
class StartHotlineServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartHotlineServiceResponseBody> body{};

  StartHotlineServiceResponse() {}

  explicit StartHotlineServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartHotlineServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartHotlineServiceResponseBody>(model1);
      }
    }
  }


  virtual ~StartHotlineServiceResponse() = default;
};
class GetAgentRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  GetAgentRequest() {}

  explicit GetAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~GetAgentRequest() = default;
};
class GetAgentResponseBodyDataGroupList : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> description{};
  shared_ptr<long> channelType{};
  shared_ptr<long> skillGroupId{};
  shared_ptr<string> name{};

  GetAgentResponseBodyDataGroupList() {}

  explicit GetAgentResponseBodyDataGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<long>(boost::any_cast<long>(m["ChannelType"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<long>(boost::any_cast<long>(m["SkillGroupId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetAgentResponseBodyDataGroupList() = default;
};
class GetAgentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> displayName{};
  shared_ptr<long> agentId{};
  shared_ptr<vector<GetAgentResponseBodyDataGroupList>> groupList{};
  shared_ptr<string> accountName{};
  shared_ptr<long> tenantId{};

  GetAgentResponseBodyData() {}

  explicit GetAgentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (groupList) {
      vector<boost::any> temp1;
      for(auto item1:*groupList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GroupList"] = boost::any(temp1);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<long>(boost::any_cast<long>(m["AgentId"]));
    }
    if (m.find("GroupList") != m.end() && !m["GroupList"].empty()) {
      if (typeid(vector<boost::any>) == m["GroupList"].type()) {
        vector<GetAgentResponseBodyDataGroupList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GroupList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAgentResponseBodyDataGroupList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groupList = make_shared<vector<GetAgentResponseBodyDataGroupList>>(expect1);
      }
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~GetAgentResponseBodyData() = default;
};
class GetAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAgentResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  GetAgentResponseBody() {}

  explicit GetAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAgentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAgentResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~GetAgentResponseBody() = default;
};
class GetAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAgentResponseBody> body{};

  GetAgentResponse() {}

  explicit GetAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAgentResponseBody>(model1);
      }
    }
  }


  virtual ~GetAgentResponse() = default;
};
class GetAgentIndexRealTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<int>> depIds{};
  shared_ptr<vector<int>> groupIds{};

  GetAgentIndexRealTimeRequest() {}

  explicit GetAgentIndexRealTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["DepIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      depIds = make_shared<vector<int>>(toVec1);
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      groupIds = make_shared<vector<int>>(toVec1);
    }
  }


  virtual ~GetAgentIndexRealTimeRequest() = default;
};
class GetAgentIndexRealTimeResponseBodyDataColumns : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> title{};

  GetAgentIndexRealTimeResponseBodyDataColumns() {}

  explicit GetAgentIndexRealTimeResponseBodyDataColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetAgentIndexRealTimeResponseBodyDataColumns() = default;
};
class GetAgentIndexRealTimeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> rows{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<vector<GetAgentIndexRealTimeResponseBodyDataColumns>> columns{};
  shared_ptr<long> page{};

  GetAgentIndexRealTimeResponseBodyData() {}

  explicit GetAgentIndexRealTimeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (columns) {
      vector<boost::any> temp1;
      for(auto item1:*columns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Columns"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Rows"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Rows"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      rows = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Columns") != m.end() && !m["Columns"].empty()) {
      if (typeid(vector<boost::any>) == m["Columns"].type()) {
        vector<GetAgentIndexRealTimeResponseBodyDataColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Columns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAgentIndexRealTimeResponseBodyDataColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columns = make_shared<vector<GetAgentIndexRealTimeResponseBodyDataColumns>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
  }


  virtual ~GetAgentIndexRealTimeResponseBodyData() = default;
};
class GetAgentIndexRealTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetAgentIndexRealTimeResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetAgentIndexRealTimeResponseBody() {}

  explicit GetAgentIndexRealTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAgentIndexRealTimeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAgentIndexRealTimeResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetAgentIndexRealTimeResponseBody() = default;
};
class GetAgentIndexRealTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAgentIndexRealTimeResponseBody> body{};

  GetAgentIndexRealTimeResponse() {}

  explicit GetAgentIndexRealTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAgentIndexRealTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAgentIndexRealTimeResponseBody>(model1);
      }
    }
  }


  virtual ~GetAgentIndexRealTimeResponse() = default;
};
class GetHotlineGroupDetailReportRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<int>> depIds{};
  shared_ptr<vector<int>> groupIds{};

  GetHotlineGroupDetailReportRequest() {}

  explicit GetHotlineGroupDetailReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["DepIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      depIds = make_shared<vector<int>>(toVec1);
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      groupIds = make_shared<vector<int>>(toVec1);
    }
  }


  virtual ~GetHotlineGroupDetailReportRequest() = default;
};
class GetHotlineGroupDetailReportResponseBodyDataColumns : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> title{};

  GetHotlineGroupDetailReportResponseBodyDataColumns() {}

  explicit GetHotlineGroupDetailReportResponseBodyDataColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetHotlineGroupDetailReportResponseBodyDataColumns() = default;
};
class GetHotlineGroupDetailReportResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> rows{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<vector<GetHotlineGroupDetailReportResponseBodyDataColumns>> columns{};
  shared_ptr<long> page{};

  GetHotlineGroupDetailReportResponseBodyData() {}

  explicit GetHotlineGroupDetailReportResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (columns) {
      vector<boost::any> temp1;
      for(auto item1:*columns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Columns"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Rows"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Rows"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      rows = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Columns") != m.end() && !m["Columns"].empty()) {
      if (typeid(vector<boost::any>) == m["Columns"].type()) {
        vector<GetHotlineGroupDetailReportResponseBodyDataColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Columns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHotlineGroupDetailReportResponseBodyDataColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columns = make_shared<vector<GetHotlineGroupDetailReportResponseBodyDataColumns>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
  }


  virtual ~GetHotlineGroupDetailReportResponseBodyData() = default;
};
class GetHotlineGroupDetailReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetHotlineGroupDetailReportResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};

  GetHotlineGroupDetailReportResponseBody() {}

  explicit GetHotlineGroupDetailReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetHotlineGroupDetailReportResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetHotlineGroupDetailReportResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~GetHotlineGroupDetailReportResponseBody() = default;
};
class GetHotlineGroupDetailReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHotlineGroupDetailReportResponseBody> body{};

  GetHotlineGroupDetailReportResponse() {}

  explicit GetHotlineGroupDetailReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHotlineGroupDetailReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotlineGroupDetailReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotlineGroupDetailReportResponse() = default;
};
class EncryptPhoneNumRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> phoneNum{};

  EncryptPhoneNumRequest() {}

  explicit EncryptPhoneNumRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (phoneNum) {
      res["PhoneNum"] = boost::any(*phoneNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PhoneNum") != m.end() && !m["PhoneNum"].empty()) {
      phoneNum = make_shared<string>(boost::any_cast<string>(m["PhoneNum"]));
    }
  }


  virtual ~EncryptPhoneNumRequest() = default;
};
class EncryptPhoneNumResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> data{};

  EncryptPhoneNumResponseBody() {}

  explicit EncryptPhoneNumResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~EncryptPhoneNumResponseBody() = default;
};
class EncryptPhoneNumResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EncryptPhoneNumResponseBody> body{};

  EncryptPhoneNumResponse() {}

  explicit EncryptPhoneNumResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EncryptPhoneNumResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EncryptPhoneNumResponseBody>(model1);
      }
    }
  }


  virtual ~EncryptPhoneNumResponse() = default;
};
class GetInstanceListRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> name{};

  GetInstanceListRequest() {}

  explicit GetInstanceListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetInstanceListRequest() = default;
};
class GetInstanceListResponseBodyCommodityInstances : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};

  GetInstanceListResponseBodyCommodityInstances() {}

  explicit GetInstanceListResponseBodyCommodityInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetInstanceListResponseBodyCommodityInstances() = default;
};
class GetInstanceListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<vector<GetInstanceListResponseBodyCommodityInstances>> commodityInstances{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetInstanceListResponseBody() {}

  explicit GetInstanceListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (commodityInstances) {
      vector<boost::any> temp1;
      for(auto item1:*commodityInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CommodityInstances"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("CommodityInstances") != m.end() && !m["CommodityInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["CommodityInstances"].type()) {
        vector<GetInstanceListResponseBodyCommodityInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CommodityInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceListResponseBodyCommodityInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        commodityInstances = make_shared<vector<GetInstanceListResponseBodyCommodityInstances>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetInstanceListResponseBody() = default;
};
class GetInstanceListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetInstanceListResponseBody> body{};

  GetInstanceListResponse() {}

  explicit GetInstanceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetInstanceListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceListResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceListResponse() = default;
};
class GetQualityProjectDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> projectId{};

  GetQualityProjectDetailRequest() {}

  explicit GetQualityProjectDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~GetQualityProjectDetailRequest() = default;
};
class GetQualityProjectDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<long> qualityType{};
  shared_ptr<vector<long>> qualityRuleIds{};
  shared_ptr<string> createTime{};
  shared_ptr<string> projectName{};
  shared_ptr<long> checkFreqType{};
  shared_ptr<vector<long>> depList{};
  shared_ptr<vector<long>> servicerList{};
  shared_ptr<long> version{};
  shared_ptr<vector<long>> groupList{};
  shared_ptr<long> id{};
  shared_ptr<string> modifyTime{};

  GetQualityProjectDetailResponseBodyData() {}

  explicit GetQualityProjectDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (qualityType) {
      res["QualityType"] = boost::any(*qualityType);
    }
    if (qualityRuleIds) {
      res["QualityRuleIds"] = boost::any(*qualityRuleIds);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (checkFreqType) {
      res["CheckFreqType"] = boost::any(*checkFreqType);
    }
    if (depList) {
      res["DepList"] = boost::any(*depList);
    }
    if (servicerList) {
      res["ServicerList"] = boost::any(*servicerList);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (groupList) {
      res["GroupList"] = boost::any(*groupList);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("QualityType") != m.end() && !m["QualityType"].empty()) {
      qualityType = make_shared<long>(boost::any_cast<long>(m["QualityType"]));
    }
    if (m.find("QualityRuleIds") != m.end() && !m["QualityRuleIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["QualityRuleIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["QualityRuleIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      qualityRuleIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("CheckFreqType") != m.end() && !m["CheckFreqType"].empty()) {
      checkFreqType = make_shared<long>(boost::any_cast<long>(m["CheckFreqType"]));
    }
    if (m.find("DepList") != m.end() && !m["DepList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DepList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      depList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ServicerList") != m.end() && !m["ServicerList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ServicerList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServicerList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      servicerList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
    if (m.find("GroupList") != m.end() && !m["GroupList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["GroupList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      groupList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
  }


  virtual ~GetQualityProjectDetailResponseBodyData() = default;
};
class GetQualityProjectDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetQualityProjectDetailResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};

  GetQualityProjectDetailResponseBody() {}

  explicit GetQualityProjectDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetQualityProjectDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetQualityProjectDetailResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~GetQualityProjectDetailResponseBody() = default;
};
class GetQualityProjectDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetQualityProjectDetailResponseBody> body{};

  GetQualityProjectDetailResponse() {}

  explicit GetQualityProjectDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetQualityProjectDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQualityProjectDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetQualityProjectDetailResponse() = default;
};
class SendCcoSmartCallOperateRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> callId{};
  shared_ptr<string> command{};
  shared_ptr<string> param{};

  SendCcoSmartCallOperateRequest() {}

  explicit SendCcoSmartCallOperateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (param) {
      res["Param"] = boost::any(*param);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
  }


  virtual ~SendCcoSmartCallOperateRequest() = default;
};
class SendCcoSmartCallOperateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};

  SendCcoSmartCallOperateResponseBody() {}

  explicit SendCcoSmartCallOperateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~SendCcoSmartCallOperateResponseBody() = default;
};
class SendCcoSmartCallOperateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SendCcoSmartCallOperateResponseBody> body{};

  SendCcoSmartCallOperateResponse() {}

  explicit SendCcoSmartCallOperateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SendCcoSmartCallOperateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendCcoSmartCallOperateResponseBody>(model1);
      }
    }
  }


  virtual ~SendCcoSmartCallOperateResponse() = default;
};
class AnswerCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> callId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> connectionId{};

  AnswerCallRequest() {}

  explicit AnswerCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
  }


  virtual ~AnswerCallRequest() = default;
};
class AnswerCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  AnswerCallResponseBody() {}

  explicit AnswerCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AnswerCallResponseBody() = default;
};
class AnswerCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AnswerCallResponseBody> body{};

  AnswerCallResponse() {}

  explicit AnswerCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AnswerCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AnswerCallResponseBody>(model1);
      }
    }
  }


  virtual ~AnswerCallResponse() = default;
};
class StartMicroOutboundRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> accountType{};
  shared_ptr<string> accountId{};
  shared_ptr<string> commandCode{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> extInfo{};
  shared_ptr<string> appName{};

  StartMicroOutboundRequest() {}

  explicit StartMicroOutboundRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (commandCode) {
      res["CommandCode"] = boost::any(*commandCode);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CommandCode") != m.end() && !m["CommandCode"].empty()) {
      commandCode = make_shared<string>(boost::any_cast<string>(m["CommandCode"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
  }


  virtual ~StartMicroOutboundRequest() = default;
};
class StartMicroOutboundResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> invokeCreateTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> invokeCmdId{};
  shared_ptr<string> customerInfo{};
  shared_ptr<string> code{};

  StartMicroOutboundResponseBody() {}

  explicit StartMicroOutboundResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invokeCreateTime) {
      res["InvokeCreateTime"] = boost::any(*invokeCreateTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (invokeCmdId) {
      res["InvokeCmdId"] = boost::any(*invokeCmdId);
    }
    if (customerInfo) {
      res["CustomerInfo"] = boost::any(*customerInfo);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvokeCreateTime") != m.end() && !m["InvokeCreateTime"].empty()) {
      invokeCreateTime = make_shared<string>(boost::any_cast<string>(m["InvokeCreateTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("InvokeCmdId") != m.end() && !m["InvokeCmdId"].empty()) {
      invokeCmdId = make_shared<string>(boost::any_cast<string>(m["InvokeCmdId"]));
    }
    if (m.find("CustomerInfo") != m.end() && !m["CustomerInfo"].empty()) {
      customerInfo = make_shared<string>(boost::any_cast<string>(m["CustomerInfo"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~StartMicroOutboundResponseBody() = default;
};
class StartMicroOutboundResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartMicroOutboundResponseBody> body{};

  StartMicroOutboundResponse() {}

  explicit StartMicroOutboundResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartMicroOutboundResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartMicroOutboundResponseBody>(model1);
      }
    }
  }


  virtual ~StartMicroOutboundResponse() = default;
};
class SuspendHotlineServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<long> type{};

  SuspendHotlineServiceRequest() {}

  explicit SuspendHotlineServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~SuspendHotlineServiceRequest() = default;
};
class SuspendHotlineServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  SuspendHotlineServiceResponseBody() {}

  explicit SuspendHotlineServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SuspendHotlineServiceResponseBody() = default;
};
class SuspendHotlineServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SuspendHotlineServiceResponseBody> body{};

  SuspendHotlineServiceResponse() {}

  explicit SuspendHotlineServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SuspendHotlineServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SuspendHotlineServiceResponseBody>(model1);
      }
    }
  }


  virtual ~SuspendHotlineServiceResponse() = default;
};
class GetAgentStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<long>> agentIds{};
  shared_ptr<vector<long>> depIds{};
  shared_ptr<string> timeLatitudeType{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existAgentGrouping{};

  GetAgentStatisticsRequest() {}

  explicit GetAgentStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (agentIds) {
      res["AgentIds"] = boost::any(*agentIds);
    }
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    if (timeLatitudeType) {
      res["TimeLatitudeType"] = boost::any(*timeLatitudeType);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existAgentGrouping) {
      res["ExistAgentGrouping"] = boost::any(*existAgentGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("AgentIds") != m.end() && !m["AgentIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AgentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AgentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      agentIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DepIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      depIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("TimeLatitudeType") != m.end() && !m["TimeLatitudeType"].empty()) {
      timeLatitudeType = make_shared<string>(boost::any_cast<string>(m["TimeLatitudeType"]));
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistAgentGrouping") != m.end() && !m["ExistAgentGrouping"].empty()) {
      existAgentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistAgentGrouping"]));
    }
  }


  virtual ~GetAgentStatisticsRequest() = default;
};
class GetAgentStatisticsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> agentIdsShrink{};
  shared_ptr<string> depIdsShrink{};
  shared_ptr<string> timeLatitudeType{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existAgentGrouping{};

  GetAgentStatisticsShrinkRequest() {}

  explicit GetAgentStatisticsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (agentIdsShrink) {
      res["AgentIds"] = boost::any(*agentIdsShrink);
    }
    if (depIdsShrink) {
      res["DepIds"] = boost::any(*depIdsShrink);
    }
    if (timeLatitudeType) {
      res["TimeLatitudeType"] = boost::any(*timeLatitudeType);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existAgentGrouping) {
      res["ExistAgentGrouping"] = boost::any(*existAgentGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("AgentIds") != m.end() && !m["AgentIds"].empty()) {
      agentIdsShrink = make_shared<string>(boost::any_cast<string>(m["AgentIds"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      depIdsShrink = make_shared<string>(boost::any_cast<string>(m["DepIds"]));
    }
    if (m.find("TimeLatitudeType") != m.end() && !m["TimeLatitudeType"].empty()) {
      timeLatitudeType = make_shared<string>(boost::any_cast<string>(m["TimeLatitudeType"]));
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistAgentGrouping") != m.end() && !m["ExistAgentGrouping"].empty()) {
      existAgentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistAgentGrouping"]));
    }
  }


  virtual ~GetAgentStatisticsShrinkRequest() = default;
};
class GetAgentStatisticsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<string> rows{};

  GetAgentStatisticsResponseBodyData() {}

  explicit GetAgentStatisticsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<string>(boost::any_cast<string>(m["Rows"]));
    }
  }


  virtual ~GetAgentStatisticsResponseBodyData() = default;
};
class GetAgentStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};
  shared_ptr<GetAgentStatisticsResponseBodyData> data{};

  GetAgentStatisticsResponseBody() {}

  explicit GetAgentStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAgentStatisticsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAgentStatisticsResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetAgentStatisticsResponseBody() = default;
};
class GetAgentStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAgentStatisticsResponseBody> body{};

  GetAgentStatisticsResponse() {}

  explicit GetAgentStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAgentStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAgentStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetAgentStatisticsResponse() = default;
};
class UpdateOuterAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> outerAccountId{};
  shared_ptr<string> outerAccountType{};
  shared_ptr<string> outerAccountName{};
  shared_ptr<string> avatar{};
  shared_ptr<string> realName{};
  shared_ptr<string> outerDepartmentId{};
  shared_ptr<string> outerGroupIds{};
  shared_ptr<string> ext{};
  shared_ptr<string> outerGroupType{};
  shared_ptr<string> outerDepartmentType{};

  UpdateOuterAccountRequest() {}

  explicit UpdateOuterAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outerAccountId) {
      res["OuterAccountId"] = boost::any(*outerAccountId);
    }
    if (outerAccountType) {
      res["OuterAccountType"] = boost::any(*outerAccountType);
    }
    if (outerAccountName) {
      res["OuterAccountName"] = boost::any(*outerAccountName);
    }
    if (avatar) {
      res["Avatar"] = boost::any(*avatar);
    }
    if (realName) {
      res["RealName"] = boost::any(*realName);
    }
    if (outerDepartmentId) {
      res["OuterDepartmentId"] = boost::any(*outerDepartmentId);
    }
    if (outerGroupIds) {
      res["OuterGroupIds"] = boost::any(*outerGroupIds);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (outerGroupType) {
      res["OuterGroupType"] = boost::any(*outerGroupType);
    }
    if (outerDepartmentType) {
      res["OuterDepartmentType"] = boost::any(*outerDepartmentType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OuterAccountId") != m.end() && !m["OuterAccountId"].empty()) {
      outerAccountId = make_shared<string>(boost::any_cast<string>(m["OuterAccountId"]));
    }
    if (m.find("OuterAccountType") != m.end() && !m["OuterAccountType"].empty()) {
      outerAccountType = make_shared<string>(boost::any_cast<string>(m["OuterAccountType"]));
    }
    if (m.find("OuterAccountName") != m.end() && !m["OuterAccountName"].empty()) {
      outerAccountName = make_shared<string>(boost::any_cast<string>(m["OuterAccountName"]));
    }
    if (m.find("Avatar") != m.end() && !m["Avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["Avatar"]));
    }
    if (m.find("RealName") != m.end() && !m["RealName"].empty()) {
      realName = make_shared<string>(boost::any_cast<string>(m["RealName"]));
    }
    if (m.find("OuterDepartmentId") != m.end() && !m["OuterDepartmentId"].empty()) {
      outerDepartmentId = make_shared<string>(boost::any_cast<string>(m["OuterDepartmentId"]));
    }
    if (m.find("OuterGroupIds") != m.end() && !m["OuterGroupIds"].empty()) {
      outerGroupIds = make_shared<string>(boost::any_cast<string>(m["OuterGroupIds"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("OuterGroupType") != m.end() && !m["OuterGroupType"].empty()) {
      outerGroupType = make_shared<string>(boost::any_cast<string>(m["OuterGroupType"]));
    }
    if (m.find("OuterDepartmentType") != m.end() && !m["OuterDepartmentType"].empty()) {
      outerDepartmentType = make_shared<string>(boost::any_cast<string>(m["OuterDepartmentType"]));
    }
  }


  virtual ~UpdateOuterAccountRequest() = default;
};
class UpdateOuterAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  UpdateOuterAccountResponseBody() {}

  explicit UpdateOuterAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateOuterAccountResponseBody() = default;
};
class UpdateOuterAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateOuterAccountResponseBody> body{};

  UpdateOuterAccountResponse() {}

  explicit UpdateOuterAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateOuterAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateOuterAccountResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateOuterAccountResponse() = default;
};
class GetHotlineWaitingNumberRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  GetHotlineWaitingNumberRequest() {}

  explicit GetHotlineWaitingNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~GetHotlineWaitingNumberRequest() = default;
};
class GetHotlineWaitingNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> data{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};

  GetHotlineWaitingNumberResponseBody() {}

  explicit GetHotlineWaitingNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~GetHotlineWaitingNumberResponseBody() = default;
};
class GetHotlineWaitingNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHotlineWaitingNumberResponseBody> body{};

  GetHotlineWaitingNumberResponse() {}

  explicit GetHotlineWaitingNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHotlineWaitingNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotlineWaitingNumberResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotlineWaitingNumberResponse() = default;
};
class HoldCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> callId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> connectionId{};

  HoldCallRequest() {}

  explicit HoldCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
  }


  virtual ~HoldCallRequest() = default;
};
class HoldCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  HoldCallResponseBody() {}

  explicit HoldCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~HoldCallResponseBody() = default;
};
class HoldCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<HoldCallResponseBody> body{};

  HoldCallResponse() {}

  explicit HoldCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        HoldCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HoldCallResponseBody>(model1);
      }
    }
  }


  virtual ~HoldCallResponse() = default;
};
class GetSeatInformationRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<long>> depIds{};
  shared_ptr<bool> existDepartmentGrouping{};

  GetSeatInformationRequest() {}

  explicit GetSeatInformationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["startDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["endDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["currentPage"] = boost::any(*currentPage);
    }
    if (depIds) {
      res["depIds"] = boost::any(*depIds);
    }
    if (existDepartmentGrouping) {
      res["existDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("startDate") != m.end() && !m["startDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["startDate"]));
    }
    if (m.find("endDate") != m.end() && !m["endDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["endDate"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("currentPage") != m.end() && !m["currentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["currentPage"]));
    }
    if (m.find("depIds") != m.end() && !m["depIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["depIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["depIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      depIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("existDepartmentGrouping") != m.end() && !m["existDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["existDepartmentGrouping"]));
    }
  }


  virtual ~GetSeatInformationRequest() = default;
};
class GetSeatInformationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> depIdsShrink{};
  shared_ptr<bool> existDepartmentGrouping{};

  GetSeatInformationShrinkRequest() {}

  explicit GetSeatInformationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["startDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["endDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["currentPage"] = boost::any(*currentPage);
    }
    if (depIdsShrink) {
      res["depIds"] = boost::any(*depIdsShrink);
    }
    if (existDepartmentGrouping) {
      res["existDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("startDate") != m.end() && !m["startDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["startDate"]));
    }
    if (m.find("endDate") != m.end() && !m["endDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["endDate"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("currentPage") != m.end() && !m["currentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["currentPage"]));
    }
    if (m.find("depIds") != m.end() && !m["depIds"].empty()) {
      depIdsShrink = make_shared<string>(boost::any_cast<string>(m["depIds"]));
    }
    if (m.find("existDepartmentGrouping") != m.end() && !m["existDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["existDepartmentGrouping"]));
    }
  }


  virtual ~GetSeatInformationShrinkRequest() = default;
};
class GetSeatInformationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<string> rowr{};

  GetSeatInformationResponseBodyData() {}

  explicit GetSeatInformationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (rowr) {
      res["Rowr"] = boost::any(*rowr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("Rowr") != m.end() && !m["Rowr"].empty()) {
      rowr = make_shared<string>(boost::any_cast<string>(m["Rowr"]));
    }
  }


  virtual ~GetSeatInformationResponseBodyData() = default;
};
class GetSeatInformationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};
  shared_ptr<GetSeatInformationResponseBodyData> data{};

  GetSeatInformationResponseBody() {}

  explicit GetSeatInformationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSeatInformationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSeatInformationResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetSeatInformationResponseBody() = default;
};
class GetSeatInformationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSeatInformationResponseBody> body{};

  GetSeatInformationResponse() {}

  explicit GetSeatInformationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSeatInformationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSeatInformationResponseBody>(model1);
      }
    }
  }


  virtual ~GetSeatInformationResponse() = default;
};
class GetRtcTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  GetRtcTokenRequest() {}

  explicit GetRtcTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~GetRtcTokenRequest() = default;
};
class GetRtcTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> token{};
  shared_ptr<string> rtcId{};
  shared_ptr<string> accountName{};

  GetRtcTokenResponseBodyData() {}

  explicit GetRtcTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (rtcId) {
      res["RtcId"] = boost::any(*rtcId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("RtcId") != m.end() && !m["RtcId"].empty()) {
      rtcId = make_shared<string>(boost::any_cast<string>(m["RtcId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~GetRtcTokenResponseBodyData() = default;
};
class GetRtcTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<GetRtcTokenResponseBodyData> data{};

  GetRtcTokenResponseBody() {}

  explicit GetRtcTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetRtcTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetRtcTokenResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetRtcTokenResponseBody() = default;
};
class GetRtcTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRtcTokenResponseBody> body{};

  GetRtcTokenResponse() {}

  explicit GetRtcTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetRtcTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRtcTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetRtcTokenResponse() = default;
};
class GetSkillGroupAndAgentStatusSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<long>> depIds{};
  shared_ptr<vector<long>> groupIds{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existSkillGroupGrouping{};

  GetSkillGroupAndAgentStatusSummaryRequest() {}

  explicit GetSkillGroupAndAgentStatusSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existSkillGroupGrouping) {
      res["ExistSkillGroupGrouping"] = boost::any(*existSkillGroupGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DepIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      depIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      groupIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistSkillGroupGrouping") != m.end() && !m["ExistSkillGroupGrouping"].empty()) {
      existSkillGroupGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistSkillGroupGrouping"]));
    }
  }


  virtual ~GetSkillGroupAndAgentStatusSummaryRequest() = default;
};
class GetSkillGroupAndAgentStatusSummaryShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> depIdsShrink{};
  shared_ptr<string> groupIdsShrink{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existSkillGroupGrouping{};

  GetSkillGroupAndAgentStatusSummaryShrinkRequest() {}

  explicit GetSkillGroupAndAgentStatusSummaryShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (depIdsShrink) {
      res["DepIds"] = boost::any(*depIdsShrink);
    }
    if (groupIdsShrink) {
      res["GroupIds"] = boost::any(*groupIdsShrink);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existSkillGroupGrouping) {
      res["ExistSkillGroupGrouping"] = boost::any(*existSkillGroupGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      depIdsShrink = make_shared<string>(boost::any_cast<string>(m["DepIds"]));
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      groupIdsShrink = make_shared<string>(boost::any_cast<string>(m["GroupIds"]));
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistSkillGroupGrouping") != m.end() && !m["ExistSkillGroupGrouping"].empty()) {
      existSkillGroupGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistSkillGroupGrouping"]));
    }
  }


  virtual ~GetSkillGroupAndAgentStatusSummaryShrinkRequest() = default;
};
class GetSkillGroupAndAgentStatusSummaryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<string> rows{};

  GetSkillGroupAndAgentStatusSummaryResponseBodyData() {}

  explicit GetSkillGroupAndAgentStatusSummaryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<string>(boost::any_cast<string>(m["Rows"]));
    }
  }


  virtual ~GetSkillGroupAndAgentStatusSummaryResponseBodyData() = default;
};
class GetSkillGroupAndAgentStatusSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};
  shared_ptr<GetSkillGroupAndAgentStatusSummaryResponseBodyData> data{};

  GetSkillGroupAndAgentStatusSummaryResponseBody() {}

  explicit GetSkillGroupAndAgentStatusSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSkillGroupAndAgentStatusSummaryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSkillGroupAndAgentStatusSummaryResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetSkillGroupAndAgentStatusSummaryResponseBody() = default;
};
class GetSkillGroupAndAgentStatusSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSkillGroupAndAgentStatusSummaryResponseBody> body{};

  GetSkillGroupAndAgentStatusSummaryResponse() {}

  explicit GetSkillGroupAndAgentStatusSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSkillGroupAndAgentStatusSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSkillGroupAndAgentStatusSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~GetSkillGroupAndAgentStatusSummaryResponse() = default;
};
class GetRecordDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> acid{};

  GetRecordDataRequest() {}

  explicit GetRecordDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (acid) {
      res["Acid"] = boost::any(*acid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Acid") != m.end() && !m["Acid"].empty()) {
      acid = make_shared<string>(boost::any_cast<string>(m["Acid"]));
    }
  }


  virtual ~GetRecordDataRequest() = default;
};
class GetRecordDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> ossLink{};
  shared_ptr<string> acid{};

  GetRecordDataResponseBodyData() {}

  explicit GetRecordDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ossLink) {
      res["OssLink"] = boost::any(*ossLink);
    }
    if (acid) {
      res["Acid"] = boost::any(*acid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OssLink") != m.end() && !m["OssLink"].empty()) {
      ossLink = make_shared<string>(boost::any_cast<string>(m["OssLink"]));
    }
    if (m.find("Acid") != m.end() && !m["Acid"].empty()) {
      acid = make_shared<string>(boost::any_cast<string>(m["Acid"]));
    }
  }


  virtual ~GetRecordDataResponseBodyData() = default;
};
class GetRecordDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetRecordDataResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  GetRecordDataResponseBody() {}

  explicit GetRecordDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetRecordDataResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetRecordDataResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~GetRecordDataResponseBody() = default;
};
class GetRecordDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRecordDataResponseBody> body{};

  GetRecordDataResponse() {}

  explicit GetRecordDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetRecordDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRecordDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetRecordDataResponse() = default;
};
class GetSkillGroupLatitudeStateRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<long>> depIds{};
  shared_ptr<vector<long>> groupIds{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existSkillGroupGrouping{};

  GetSkillGroupLatitudeStateRequest() {}

  explicit GetSkillGroupLatitudeStateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existSkillGroupGrouping) {
      res["ExistSkillGroupGrouping"] = boost::any(*existSkillGroupGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DepIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      depIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      groupIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistSkillGroupGrouping") != m.end() && !m["ExistSkillGroupGrouping"].empty()) {
      existSkillGroupGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistSkillGroupGrouping"]));
    }
  }


  virtual ~GetSkillGroupLatitudeStateRequest() = default;
};
class GetSkillGroupLatitudeStateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> depIdsShrink{};
  shared_ptr<string> groupIdsShrink{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existSkillGroupGrouping{};

  GetSkillGroupLatitudeStateShrinkRequest() {}

  explicit GetSkillGroupLatitudeStateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (depIdsShrink) {
      res["DepIds"] = boost::any(*depIdsShrink);
    }
    if (groupIdsShrink) {
      res["GroupIds"] = boost::any(*groupIdsShrink);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existSkillGroupGrouping) {
      res["ExistSkillGroupGrouping"] = boost::any(*existSkillGroupGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      depIdsShrink = make_shared<string>(boost::any_cast<string>(m["DepIds"]));
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      groupIdsShrink = make_shared<string>(boost::any_cast<string>(m["GroupIds"]));
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistSkillGroupGrouping") != m.end() && !m["ExistSkillGroupGrouping"].empty()) {
      existSkillGroupGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistSkillGroupGrouping"]));
    }
  }


  virtual ~GetSkillGroupLatitudeStateShrinkRequest() = default;
};
class GetSkillGroupLatitudeStateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<string> rows{};

  GetSkillGroupLatitudeStateResponseBodyData() {}

  explicit GetSkillGroupLatitudeStateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<string>(boost::any_cast<string>(m["Rows"]));
    }
  }


  virtual ~GetSkillGroupLatitudeStateResponseBodyData() = default;
};
class GetSkillGroupLatitudeStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};
  shared_ptr<GetSkillGroupLatitudeStateResponseBodyData> data{};

  GetSkillGroupLatitudeStateResponseBody() {}

  explicit GetSkillGroupLatitudeStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSkillGroupLatitudeStateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSkillGroupLatitudeStateResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetSkillGroupLatitudeStateResponseBody() = default;
};
class GetSkillGroupLatitudeStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSkillGroupLatitudeStateResponseBody> body{};

  GetSkillGroupLatitudeStateResponse() {}

  explicit GetSkillGroupLatitudeStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSkillGroupLatitudeStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSkillGroupLatitudeStateResponseBody>(model1);
      }
    }
  }


  virtual ~GetSkillGroupLatitudeStateResponse() = default;
};
class DeleteQualityRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> id{};

  DeleteQualityRuleRequest() {}

  explicit DeleteQualityRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DeleteQualityRuleRequest() = default;
};
class DeleteQualityRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DeleteQualityRuleResponseBody() {}

  explicit DeleteQualityRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteQualityRuleResponseBody() = default;
};
class DeleteQualityRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteQualityRuleResponseBody> body{};

  DeleteQualityRuleResponse() {}

  explicit DeleteQualityRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteQualityRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteQualityRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteQualityRuleResponse() = default;
};
class SuspendOutboundTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> outboundTaskId{};
  shared_ptr<string> instanceId{};

  SuspendOutboundTaskRequest() {}

  explicit SuspendOutboundTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outboundTaskId) {
      res["OutboundTaskId"] = boost::any(*outboundTaskId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutboundTaskId") != m.end() && !m["OutboundTaskId"].empty()) {
      outboundTaskId = make_shared<long>(boost::any_cast<long>(m["OutboundTaskId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~SuspendOutboundTaskRequest() = default;
};
class SuspendOutboundTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  SuspendOutboundTaskResponseBody() {}

  explicit SuspendOutboundTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SuspendOutboundTaskResponseBody() = default;
};
class SuspendOutboundTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SuspendOutboundTaskResponseBody> body{};

  SuspendOutboundTaskResponse() {}

  explicit SuspendOutboundTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SuspendOutboundTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SuspendOutboundTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SuspendOutboundTaskResponse() = default;
};
class GetHotlineServiceStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<long>> agentIds{};
  shared_ptr<vector<long>> depIds{};
  shared_ptr<vector<long>> groupIds{};
  shared_ptr<string> timeLatitudeType{};
  shared_ptr<bool> existAgentGrouping{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existSkillGroupGrouping{};

  GetHotlineServiceStatisticsRequest() {}

  explicit GetHotlineServiceStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (agentIds) {
      res["AgentIds"] = boost::any(*agentIds);
    }
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    if (timeLatitudeType) {
      res["TimeLatitudeType"] = boost::any(*timeLatitudeType);
    }
    if (existAgentGrouping) {
      res["ExistAgentGrouping"] = boost::any(*existAgentGrouping);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existSkillGroupGrouping) {
      res["ExistSkillGroupGrouping"] = boost::any(*existSkillGroupGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("AgentIds") != m.end() && !m["AgentIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AgentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AgentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      agentIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DepIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      depIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      groupIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("TimeLatitudeType") != m.end() && !m["TimeLatitudeType"].empty()) {
      timeLatitudeType = make_shared<string>(boost::any_cast<string>(m["TimeLatitudeType"]));
    }
    if (m.find("ExistAgentGrouping") != m.end() && !m["ExistAgentGrouping"].empty()) {
      existAgentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistAgentGrouping"]));
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistSkillGroupGrouping") != m.end() && !m["ExistSkillGroupGrouping"].empty()) {
      existSkillGroupGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistSkillGroupGrouping"]));
    }
  }


  virtual ~GetHotlineServiceStatisticsRequest() = default;
};
class GetHotlineServiceStatisticsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> agentIdsShrink{};
  shared_ptr<string> depIdsShrink{};
  shared_ptr<string> groupIdsShrink{};
  shared_ptr<string> timeLatitudeType{};
  shared_ptr<bool> existAgentGrouping{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existSkillGroupGrouping{};

  GetHotlineServiceStatisticsShrinkRequest() {}

  explicit GetHotlineServiceStatisticsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (agentIdsShrink) {
      res["AgentIds"] = boost::any(*agentIdsShrink);
    }
    if (depIdsShrink) {
      res["DepIds"] = boost::any(*depIdsShrink);
    }
    if (groupIdsShrink) {
      res["GroupIds"] = boost::any(*groupIdsShrink);
    }
    if (timeLatitudeType) {
      res["TimeLatitudeType"] = boost::any(*timeLatitudeType);
    }
    if (existAgentGrouping) {
      res["ExistAgentGrouping"] = boost::any(*existAgentGrouping);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existSkillGroupGrouping) {
      res["ExistSkillGroupGrouping"] = boost::any(*existSkillGroupGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("AgentIds") != m.end() && !m["AgentIds"].empty()) {
      agentIdsShrink = make_shared<string>(boost::any_cast<string>(m["AgentIds"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      depIdsShrink = make_shared<string>(boost::any_cast<string>(m["DepIds"]));
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      groupIdsShrink = make_shared<string>(boost::any_cast<string>(m["GroupIds"]));
    }
    if (m.find("TimeLatitudeType") != m.end() && !m["TimeLatitudeType"].empty()) {
      timeLatitudeType = make_shared<string>(boost::any_cast<string>(m["TimeLatitudeType"]));
    }
    if (m.find("ExistAgentGrouping") != m.end() && !m["ExistAgentGrouping"].empty()) {
      existAgentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistAgentGrouping"]));
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistSkillGroupGrouping") != m.end() && !m["ExistSkillGroupGrouping"].empty()) {
      existSkillGroupGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistSkillGroupGrouping"]));
    }
  }


  virtual ~GetHotlineServiceStatisticsShrinkRequest() = default;
};
class GetHotlineServiceStatisticsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<string> rows{};

  GetHotlineServiceStatisticsResponseBodyData() {}

  explicit GetHotlineServiceStatisticsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<string>(boost::any_cast<string>(m["Rows"]));
    }
  }


  virtual ~GetHotlineServiceStatisticsResponseBodyData() = default;
};
class GetHotlineServiceStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};
  shared_ptr<GetHotlineServiceStatisticsResponseBodyData> data{};

  GetHotlineServiceStatisticsResponseBody() {}

  explicit GetHotlineServiceStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetHotlineServiceStatisticsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetHotlineServiceStatisticsResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetHotlineServiceStatisticsResponseBody() = default;
};
class GetHotlineServiceStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHotlineServiceStatisticsResponseBody> body{};

  GetHotlineServiceStatisticsResponse() {}

  explicit GetHotlineServiceStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHotlineServiceStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotlineServiceStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotlineServiceStatisticsResponse() = default;
};
class EditQualityProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<long> checkFreqType{};
  shared_ptr<long> projectVersion{};
  shared_ptr<long> scopeType{};
  shared_ptr<string> timeRangeStart{};
  shared_ptr<string> timeRangeEnd{};
  shared_ptr<vector<int>> analysisIds{};
  shared_ptr<vector<int>> depList{};
  shared_ptr<vector<int>> groupList{};
  shared_ptr<vector<string>> servicerList{};
  shared_ptr<vector<int>> channelTouchType{};

  EditQualityProjectRequest() {}

  explicit EditQualityProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (checkFreqType) {
      res["CheckFreqType"] = boost::any(*checkFreqType);
    }
    if (projectVersion) {
      res["ProjectVersion"] = boost::any(*projectVersion);
    }
    if (scopeType) {
      res["ScopeType"] = boost::any(*scopeType);
    }
    if (timeRangeStart) {
      res["TimeRangeStart"] = boost::any(*timeRangeStart);
    }
    if (timeRangeEnd) {
      res["TimeRangeEnd"] = boost::any(*timeRangeEnd);
    }
    if (analysisIds) {
      res["AnalysisIds"] = boost::any(*analysisIds);
    }
    if (depList) {
      res["DepList"] = boost::any(*depList);
    }
    if (groupList) {
      res["GroupList"] = boost::any(*groupList);
    }
    if (servicerList) {
      res["ServicerList"] = boost::any(*servicerList);
    }
    if (channelTouchType) {
      res["ChannelTouchType"] = boost::any(*channelTouchType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("CheckFreqType") != m.end() && !m["CheckFreqType"].empty()) {
      checkFreqType = make_shared<long>(boost::any_cast<long>(m["CheckFreqType"]));
    }
    if (m.find("ProjectVersion") != m.end() && !m["ProjectVersion"].empty()) {
      projectVersion = make_shared<long>(boost::any_cast<long>(m["ProjectVersion"]));
    }
    if (m.find("ScopeType") != m.end() && !m["ScopeType"].empty()) {
      scopeType = make_shared<long>(boost::any_cast<long>(m["ScopeType"]));
    }
    if (m.find("TimeRangeStart") != m.end() && !m["TimeRangeStart"].empty()) {
      timeRangeStart = make_shared<string>(boost::any_cast<string>(m["TimeRangeStart"]));
    }
    if (m.find("TimeRangeEnd") != m.end() && !m["TimeRangeEnd"].empty()) {
      timeRangeEnd = make_shared<string>(boost::any_cast<string>(m["TimeRangeEnd"]));
    }
    if (m.find("AnalysisIds") != m.end() && !m["AnalysisIds"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["AnalysisIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AnalysisIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      analysisIds = make_shared<vector<int>>(toVec1);
    }
    if (m.find("DepList") != m.end() && !m["DepList"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["DepList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      depList = make_shared<vector<int>>(toVec1);
    }
    if (m.find("GroupList") != m.end() && !m["GroupList"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["GroupList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      groupList = make_shared<vector<int>>(toVec1);
    }
    if (m.find("ServicerList") != m.end() && !m["ServicerList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServicerList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServicerList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      servicerList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ChannelTouchType") != m.end() && !m["ChannelTouchType"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["ChannelTouchType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChannelTouchType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      channelTouchType = make_shared<vector<int>>(toVec1);
    }
  }


  virtual ~EditQualityProjectRequest() = default;
};
class EditQualityProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> version{};
  shared_ptr<long> projectId{};
  shared_ptr<string> instanceId{};

  EditQualityProjectResponseBodyData() {}

  explicit EditQualityProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~EditQualityProjectResponseBodyData() = default;
};
class EditQualityProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<EditQualityProjectResponseBodyData>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  EditQualityProjectResponseBody() {}

  explicit EditQualityProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<EditQualityProjectResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EditQualityProjectResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<EditQualityProjectResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EditQualityProjectResponseBody() = default;
};
class EditQualityProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EditQualityProjectResponseBody> body{};

  EditQualityProjectResponse() {}

  explicit EditQualityProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EditQualityProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EditQualityProjectResponseBody>(model1);
      }
    }
  }


  virtual ~EditQualityProjectResponse() = default;
};
class ListOuterOrderedNumbersRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> prodCode{};

  ListOuterOrderedNumbersRequest() {}

  explicit ListOuterOrderedNumbersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
  }


  virtual ~ListOuterOrderedNumbersRequest() = default;
};
class ListOuterOrderedNumbersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> numbers{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  ListOuterOrderedNumbersResponseBody() {}

  explicit ListOuterOrderedNumbersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (numbers) {
      res["Numbers"] = boost::any(*numbers);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Numbers") != m.end() && !m["Numbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Numbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Numbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      numbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListOuterOrderedNumbersResponseBody() = default;
};
class ListOuterOrderedNumbersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListOuterOrderedNumbersResponseBody> body{};

  ListOuterOrderedNumbersResponse() {}

  explicit ListOuterOrderedNumbersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListOuterOrderedNumbersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOuterOrderedNumbersResponseBody>(model1);
      }
    }
  }


  virtual ~ListOuterOrderedNumbersResponse() = default;
};
class GetAgentBasisStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<long>> agentIds{};
  shared_ptr<vector<long>> depIds{};

  GetAgentBasisStatusRequest() {}

  explicit GetAgentBasisStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (agentIds) {
      res["AgentIds"] = boost::any(*agentIds);
    }
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("AgentIds") != m.end() && !m["AgentIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AgentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AgentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      agentIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DepIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      depIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~GetAgentBasisStatusRequest() = default;
};
class GetAgentBasisStatusShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> agentIdsShrink{};
  shared_ptr<string> depIdsShrink{};

  GetAgentBasisStatusShrinkRequest() {}

  explicit GetAgentBasisStatusShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (agentIdsShrink) {
      res["AgentIds"] = boost::any(*agentIdsShrink);
    }
    if (depIdsShrink) {
      res["DepIds"] = boost::any(*depIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("AgentIds") != m.end() && !m["AgentIds"].empty()) {
      agentIdsShrink = make_shared<string>(boost::any_cast<string>(m["AgentIds"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      depIdsShrink = make_shared<string>(boost::any_cast<string>(m["DepIds"]));
    }
  }


  virtual ~GetAgentBasisStatusShrinkRequest() = default;
};
class GetAgentBasisStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<string> rows{};

  GetAgentBasisStatusResponseBodyData() {}

  explicit GetAgentBasisStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<string>(boost::any_cast<string>(m["Rows"]));
    }
  }


  virtual ~GetAgentBasisStatusResponseBodyData() = default;
};
class GetAgentBasisStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};
  shared_ptr<GetAgentBasisStatusResponseBodyData> data{};

  GetAgentBasisStatusResponseBody() {}

  explicit GetAgentBasisStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAgentBasisStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAgentBasisStatusResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetAgentBasisStatusResponseBody() = default;
};
class GetAgentBasisStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAgentBasisStatusResponseBody> body{};

  GetAgentBasisStatusResponse() {}

  explicit GetAgentBasisStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAgentBasisStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAgentBasisStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetAgentBasisStatusResponse() = default;
};
class GetQualityResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> touchStartTime{};
  shared_ptr<string> touchEndTime{};
  shared_ptr<string> channelType{};
  shared_ptr<long> hitStatus{};
  shared_ptr<vector<int>> groupIds{};
  shared_ptr<vector<int>> qualityRuleIds{};
  shared_ptr<vector<int>> projectIds{};

  GetQualityResultRequest() {}

  explicit GetQualityResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (touchStartTime) {
      res["TouchStartTime"] = boost::any(*touchStartTime);
    }
    if (touchEndTime) {
      res["TouchEndTime"] = boost::any(*touchEndTime);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (hitStatus) {
      res["HitStatus"] = boost::any(*hitStatus);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    if (qualityRuleIds) {
      res["QualityRuleIds"] = boost::any(*qualityRuleIds);
    }
    if (projectIds) {
      res["ProjectIds"] = boost::any(*projectIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TouchStartTime") != m.end() && !m["TouchStartTime"].empty()) {
      touchStartTime = make_shared<string>(boost::any_cast<string>(m["TouchStartTime"]));
    }
    if (m.find("TouchEndTime") != m.end() && !m["TouchEndTime"].empty()) {
      touchEndTime = make_shared<string>(boost::any_cast<string>(m["TouchEndTime"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("HitStatus") != m.end() && !m["HitStatus"].empty()) {
      hitStatus = make_shared<long>(boost::any_cast<long>(m["HitStatus"]));
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      groupIds = make_shared<vector<int>>(toVec1);
    }
    if (m.find("QualityRuleIds") != m.end() && !m["QualityRuleIds"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["QualityRuleIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["QualityRuleIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      qualityRuleIds = make_shared<vector<int>>(toVec1);
    }
    if (m.find("ProjectIds") != m.end() && !m["ProjectIds"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["ProjectIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ProjectIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      projectIds = make_shared<vector<int>>(toVec1);
    }
  }


  virtual ~GetQualityResultRequest() = default;
};
class GetQualityResultResponseBodyDataQualityResultResponseList : public Darabonba::Model {
public:
  shared_ptr<string> touchId{};
  shared_ptr<string> servicerName{};
  shared_ptr<string> memberName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> projectId{};
  shared_ptr<string> channelType{};
  shared_ptr<string> channelTypeName{};
  shared_ptr<string> touchStartTime{};
  shared_ptr<string> servicerId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceName{};
  shared_ptr<bool> hitStatus{};
  shared_ptr<string> hitDetail{};

  GetQualityResultResponseBodyDataQualityResultResponseList() {}

  explicit GetQualityResultResponseBodyDataQualityResultResponseList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (touchId) {
      res["TouchId"] = boost::any(*touchId);
    }
    if (servicerName) {
      res["ServicerName"] = boost::any(*servicerName);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (channelTypeName) {
      res["ChannelTypeName"] = boost::any(*channelTypeName);
    }
    if (touchStartTime) {
      res["TouchStartTime"] = boost::any(*touchStartTime);
    }
    if (servicerId) {
      res["ServicerId"] = boost::any(*servicerId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (hitStatus) {
      res["HitStatus"] = boost::any(*hitStatus);
    }
    if (hitDetail) {
      res["HitDetail"] = boost::any(*hitDetail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TouchId") != m.end() && !m["TouchId"].empty()) {
      touchId = make_shared<string>(boost::any_cast<string>(m["TouchId"]));
    }
    if (m.find("ServicerName") != m.end() && !m["ServicerName"].empty()) {
      servicerName = make_shared<string>(boost::any_cast<string>(m["ServicerName"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("ChannelTypeName") != m.end() && !m["ChannelTypeName"].empty()) {
      channelTypeName = make_shared<string>(boost::any_cast<string>(m["ChannelTypeName"]));
    }
    if (m.find("TouchStartTime") != m.end() && !m["TouchStartTime"].empty()) {
      touchStartTime = make_shared<string>(boost::any_cast<string>(m["TouchStartTime"]));
    }
    if (m.find("ServicerId") != m.end() && !m["ServicerId"].empty()) {
      servicerId = make_shared<string>(boost::any_cast<string>(m["ServicerId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("HitStatus") != m.end() && !m["HitStatus"].empty()) {
      hitStatus = make_shared<bool>(boost::any_cast<bool>(m["HitStatus"]));
    }
    if (m.find("HitDetail") != m.end() && !m["HitDetail"].empty()) {
      hitDetail = make_shared<string>(boost::any_cast<string>(m["HitDetail"]));
    }
  }


  virtual ~GetQualityResultResponseBodyDataQualityResultResponseList() = default;
};
class GetQualityResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<vector<GetQualityResultResponseBodyDataQualityResultResponseList>> qualityResultResponseList{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};

  GetQualityResultResponseBodyData() {}

  explicit GetQualityResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (qualityResultResponseList) {
      vector<boost::any> temp1;
      for(auto item1:*qualityResultResponseList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QualityResultResponseList"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("QualityResultResponseList") != m.end() && !m["QualityResultResponseList"].empty()) {
      if (typeid(vector<boost::any>) == m["QualityResultResponseList"].type()) {
        vector<GetQualityResultResponseBodyDataQualityResultResponseList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QualityResultResponseList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQualityResultResponseBodyDataQualityResultResponseList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        qualityResultResponseList = make_shared<vector<GetQualityResultResponseBodyDataQualityResultResponseList>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~GetQualityResultResponseBodyData() = default;
};
class GetQualityResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetQualityResultResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<string> channelTypeName{};
  shared_ptr<bool> success{};

  GetQualityResultResponseBody() {}

  explicit GetQualityResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (channelTypeName) {
      res["ChannelTypeName"] = boost::any(*channelTypeName);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetQualityResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetQualityResultResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ChannelTypeName") != m.end() && !m["ChannelTypeName"].empty()) {
      channelTypeName = make_shared<string>(boost::any_cast<string>(m["ChannelTypeName"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetQualityResultResponseBody() = default;
};
class GetQualityResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetQualityResultResponseBody> body{};

  GetQualityResultResponse() {}

  explicit GetQualityResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetQualityResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQualityResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetQualityResultResponse() = default;
};
class GetIndexCurrentValueRequest : public Darabonba::Model {
public:
  shared_ptr<string> depIds{};
  shared_ptr<string> groupIds{};
  shared_ptr<string> instanceId{};

  GetIndexCurrentValueRequest() {}

  explicit GetIndexCurrentValueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      depIds = make_shared<string>(boost::any_cast<string>(m["DepIds"]));
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      groupIds = make_shared<string>(boost::any_cast<string>(m["GroupIds"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetIndexCurrentValueRequest() = default;
};
class GetIndexCurrentValueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetIndexCurrentValueResponseBody() {}

  explicit GetIndexCurrentValueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetIndexCurrentValueResponseBody() = default;
};
class GetIndexCurrentValueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetIndexCurrentValueResponseBody> body{};

  GetIndexCurrentValueResponse() {}

  explicit GetIndexCurrentValueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetIndexCurrentValueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetIndexCurrentValueResponseBody>(model1);
      }
    }
  }


  virtual ~GetIndexCurrentValueResponse() = default;
};
class GenerateWebSocketSignRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  GenerateWebSocketSignRequest() {}

  explicit GenerateWebSocketSignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~GenerateWebSocketSignRequest() = default;
};
class GenerateWebSocketSignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  GenerateWebSocketSignResponseBody() {}

  explicit GenerateWebSocketSignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~GenerateWebSocketSignResponseBody() = default;
};
class GenerateWebSocketSignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenerateWebSocketSignResponseBody> body{};

  GenerateWebSocketSignResponse() {}

  explicit GenerateWebSocketSignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GenerateWebSocketSignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateWebSocketSignResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateWebSocketSignResponse() = default;
};
class CreateAgentRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> displayName{};
  shared_ptr<vector<long>> skillGroupId{};
  shared_ptr<vector<long>> skillGroupIdList{};

  CreateAgentRequest() {}

  explicit CreateAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (skillGroupIdList) {
      res["SkillGroupIdList"] = boost::any(*skillGroupIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SkillGroupId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SkillGroupId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      skillGroupId = make_shared<vector<long>>(toVec1);
    }
    if (m.find("SkillGroupIdList") != m.end() && !m["SkillGroupIdList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SkillGroupIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SkillGroupIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      skillGroupIdList = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~CreateAgentRequest() = default;
};
class CreateAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  CreateAgentResponseBody() {}

  explicit CreateAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~CreateAgentResponseBody() = default;
};
class CreateAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAgentResponseBody> body{};

  CreateAgentResponse() {}

  explicit CreateAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAgentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAgentResponse() = default;
};
class QueryTaskDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> outboundTaskId{};
  shared_ptr<string> statusList{};
  shared_ptr<string> endReasonList{};
  shared_ptr<string> skillGroup{};
  shared_ptr<string> servicerName{};
  shared_ptr<string> servicerId{};
  shared_ptr<string> priorityList{};
  shared_ptr<long> taskId{};
  shared_ptr<string> ani{};
  shared_ptr<string> dnis{};
  shared_ptr<string> sid{};
  shared_ptr<string> departmentIdList{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};

  QueryTaskDetailRequest() {}

  explicit QueryTaskDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outboundTaskId) {
      res["OutboundTaskId"] = boost::any(*outboundTaskId);
    }
    if (statusList) {
      res["StatusList"] = boost::any(*statusList);
    }
    if (endReasonList) {
      res["EndReasonList"] = boost::any(*endReasonList);
    }
    if (skillGroup) {
      res["SkillGroup"] = boost::any(*skillGroup);
    }
    if (servicerName) {
      res["ServicerName"] = boost::any(*servicerName);
    }
    if (servicerId) {
      res["ServicerId"] = boost::any(*servicerId);
    }
    if (priorityList) {
      res["PriorityList"] = boost::any(*priorityList);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (ani) {
      res["Ani"] = boost::any(*ani);
    }
    if (dnis) {
      res["Dnis"] = boost::any(*dnis);
    }
    if (sid) {
      res["Sid"] = boost::any(*sid);
    }
    if (departmentIdList) {
      res["DepartmentIdList"] = boost::any(*departmentIdList);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutboundTaskId") != m.end() && !m["OutboundTaskId"].empty()) {
      outboundTaskId = make_shared<string>(boost::any_cast<string>(m["OutboundTaskId"]));
    }
    if (m.find("StatusList") != m.end() && !m["StatusList"].empty()) {
      statusList = make_shared<string>(boost::any_cast<string>(m["StatusList"]));
    }
    if (m.find("EndReasonList") != m.end() && !m["EndReasonList"].empty()) {
      endReasonList = make_shared<string>(boost::any_cast<string>(m["EndReasonList"]));
    }
    if (m.find("SkillGroup") != m.end() && !m["SkillGroup"].empty()) {
      skillGroup = make_shared<string>(boost::any_cast<string>(m["SkillGroup"]));
    }
    if (m.find("ServicerName") != m.end() && !m["ServicerName"].empty()) {
      servicerName = make_shared<string>(boost::any_cast<string>(m["ServicerName"]));
    }
    if (m.find("ServicerId") != m.end() && !m["ServicerId"].empty()) {
      servicerId = make_shared<string>(boost::any_cast<string>(m["ServicerId"]));
    }
    if (m.find("PriorityList") != m.end() && !m["PriorityList"].empty()) {
      priorityList = make_shared<string>(boost::any_cast<string>(m["PriorityList"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("Ani") != m.end() && !m["Ani"].empty()) {
      ani = make_shared<string>(boost::any_cast<string>(m["Ani"]));
    }
    if (m.find("Dnis") != m.end() && !m["Dnis"].empty()) {
      dnis = make_shared<string>(boost::any_cast<string>(m["Dnis"]));
    }
    if (m.find("Sid") != m.end() && !m["Sid"].empty()) {
      sid = make_shared<string>(boost::any_cast<string>(m["Sid"]));
    }
    if (m.find("DepartmentIdList") != m.end() && !m["DepartmentIdList"].empty()) {
      departmentIdList = make_shared<string>(boost::any_cast<string>(m["DepartmentIdList"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
  }


  virtual ~QueryTaskDetailRequest() = default;
};
class QueryTaskDetailResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> memberName{};
  shared_ptr<string> servicerName{};
  shared_ptr<long> outboundNum{};
  shared_ptr<string> retryTime{};
  shared_ptr<long> priority{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> dnis{};
  shared_ptr<long> servicerId{};
  shared_ptr<long> outboundTaskId{};
  shared_ptr<long> buId{};
  shared_ptr<long> endReason{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> departmentId{};
  shared_ptr<string> ani{};
  shared_ptr<long> memberId{};
  shared_ptr<long> skillGroup{};
  shared_ptr<string> extAttrs{};
  shared_ptr<long> id{};

  QueryTaskDetailResponseBodyDataList() {}

  explicit QueryTaskDetailResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (servicerName) {
      res["ServicerName"] = boost::any(*servicerName);
    }
    if (outboundNum) {
      res["OutboundNum"] = boost::any(*outboundNum);
    }
    if (retryTime) {
      res["RetryTime"] = boost::any(*retryTime);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (dnis) {
      res["Dnis"] = boost::any(*dnis);
    }
    if (servicerId) {
      res["ServicerId"] = boost::any(*servicerId);
    }
    if (outboundTaskId) {
      res["OutboundTaskId"] = boost::any(*outboundTaskId);
    }
    if (buId) {
      res["BuId"] = boost::any(*buId);
    }
    if (endReason) {
      res["EndReason"] = boost::any(*endReason);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (ani) {
      res["Ani"] = boost::any(*ani);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (skillGroup) {
      res["SkillGroup"] = boost::any(*skillGroup);
    }
    if (extAttrs) {
      res["ExtAttrs"] = boost::any(*extAttrs);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("ServicerName") != m.end() && !m["ServicerName"].empty()) {
      servicerName = make_shared<string>(boost::any_cast<string>(m["ServicerName"]));
    }
    if (m.find("OutboundNum") != m.end() && !m["OutboundNum"].empty()) {
      outboundNum = make_shared<long>(boost::any_cast<long>(m["OutboundNum"]));
    }
    if (m.find("RetryTime") != m.end() && !m["RetryTime"].empty()) {
      retryTime = make_shared<string>(boost::any_cast<string>(m["RetryTime"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("Dnis") != m.end() && !m["Dnis"].empty()) {
      dnis = make_shared<string>(boost::any_cast<string>(m["Dnis"]));
    }
    if (m.find("ServicerId") != m.end() && !m["ServicerId"].empty()) {
      servicerId = make_shared<long>(boost::any_cast<long>(m["ServicerId"]));
    }
    if (m.find("OutboundTaskId") != m.end() && !m["OutboundTaskId"].empty()) {
      outboundTaskId = make_shared<long>(boost::any_cast<long>(m["OutboundTaskId"]));
    }
    if (m.find("BuId") != m.end() && !m["BuId"].empty()) {
      buId = make_shared<long>(boost::any_cast<long>(m["BuId"]));
    }
    if (m.find("EndReason") != m.end() && !m["EndReason"].empty()) {
      endReason = make_shared<long>(boost::any_cast<long>(m["EndReason"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<long>(boost::any_cast<long>(m["DepartmentId"]));
    }
    if (m.find("Ani") != m.end() && !m["Ani"].empty()) {
      ani = make_shared<string>(boost::any_cast<string>(m["Ani"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
    if (m.find("SkillGroup") != m.end() && !m["SkillGroup"].empty()) {
      skillGroup = make_shared<long>(boost::any_cast<long>(m["SkillGroup"]));
    }
    if (m.find("ExtAttrs") != m.end() && !m["ExtAttrs"].empty()) {
      extAttrs = make_shared<string>(boost::any_cast<string>(m["ExtAttrs"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~QueryTaskDetailResponseBodyDataList() = default;
};
class QueryTaskDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> totalResults{};
  shared_ptr<string> currentPage{};
  shared_ptr<vector<QueryTaskDetailResponseBodyDataList>> list{};
  shared_ptr<string> pageSize{};

  QueryTaskDetailResponseBodyData() {}

  explicit QueryTaskDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalResults) {
      res["TotalResults"] = boost::any(*totalResults);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalResults") != m.end() && !m["TotalResults"].empty()) {
      totalResults = make_shared<string>(boost::any_cast<string>(m["TotalResults"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<QueryTaskDetailResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTaskDetailResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<QueryTaskDetailResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~QueryTaskDetailResponseBodyData() = default;
};
class QueryTaskDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<QueryTaskDetailResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};

  QueryTaskDetailResponseBody() {}

  explicit QueryTaskDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["HttpStatusCode"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryTaskDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryTaskDetailResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~QueryTaskDetailResponseBody() = default;
};
class QueryTaskDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryTaskDetailResponseBody> body{};

  QueryTaskDetailResponse() {}

  explicit QueryTaskDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTaskDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTaskDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTaskDetailResponse() = default;
};
class EditQualityRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<long> ruleTag{};
  shared_ptr<long> matchType{};
  shared_ptr<long> qualityRuleId{};
  shared_ptr<vector<string>> keyWords{};

  EditQualityRuleRequest() {}

  explicit EditQualityRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ruleTag) {
      res["RuleTag"] = boost::any(*ruleTag);
    }
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (qualityRuleId) {
      res["QualityRuleId"] = boost::any(*qualityRuleId);
    }
    if (keyWords) {
      res["KeyWords"] = boost::any(*keyWords);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RuleTag") != m.end() && !m["RuleTag"].empty()) {
      ruleTag = make_shared<long>(boost::any_cast<long>(m["RuleTag"]));
    }
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<long>(boost::any_cast<long>(m["MatchType"]));
    }
    if (m.find("QualityRuleId") != m.end() && !m["QualityRuleId"].empty()) {
      qualityRuleId = make_shared<long>(boost::any_cast<long>(m["QualityRuleId"]));
    }
    if (m.find("KeyWords") != m.end() && !m["KeyWords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["KeyWords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["KeyWords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keyWords = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~EditQualityRuleRequest() = default;
};
class EditQualityRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  EditQualityRuleResponseBody() {}

  explicit EditQualityRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EditQualityRuleResponseBody() = default;
};
class EditQualityRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EditQualityRuleResponseBody> body{};

  EditQualityRuleResponse() {}

  explicit EditQualityRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EditQualityRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EditQualityRuleResponseBody>(model1);
      }
    }
  }


  virtual ~EditQualityRuleResponse() = default;
};
class GetMcuLvsIpRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetMcuLvsIpRequest() {}

  explicit GetMcuLvsIpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetMcuLvsIpRequest() = default;
};
class GetMcuLvsIpResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> data{};

  GetMcuLvsIpResponseBody() {}

  explicit GetMcuLvsIpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~GetMcuLvsIpResponseBody() = default;
};
class GetMcuLvsIpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetMcuLvsIpResponseBody> body{};

  GetMcuLvsIpResponse() {}

  explicit GetMcuLvsIpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMcuLvsIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMcuLvsIpResponseBody>(model1);
      }
    }
  }


  virtual ~GetMcuLvsIpResponse() = default;
};
class GetDepGroupTreeDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> agentId{};

  GetDepGroupTreeDataRequest() {}

  explicit GetDepGroupTreeDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<long>(boost::any_cast<long>(m["AgentId"]));
    }
  }


  virtual ~GetDepGroupTreeDataRequest() = default;
};
class GetDepGroupTreeDataResponseBodyDataGroupDTOS : public Darabonba::Model {
public:
  shared_ptr<long> skillGroupId{};
  shared_ptr<string> name{};

  GetDepGroupTreeDataResponseBodyDataGroupDTOS() {}

  explicit GetDepGroupTreeDataResponseBodyDataGroupDTOS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<long>(boost::any_cast<long>(m["SkillGroupId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetDepGroupTreeDataResponseBodyDataGroupDTOS() = default;
};
class GetDepGroupTreeDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> depGroupName{};
  shared_ptr<string> depGroupId{};
  shared_ptr<vector<GetDepGroupTreeDataResponseBodyDataGroupDTOS>> groupDTOS{};

  GetDepGroupTreeDataResponseBodyData() {}

  explicit GetDepGroupTreeDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (depGroupName) {
      res["DepGroupName"] = boost::any(*depGroupName);
    }
    if (depGroupId) {
      res["DepGroupId"] = boost::any(*depGroupId);
    }
    if (groupDTOS) {
      vector<boost::any> temp1;
      for(auto item1:*groupDTOS){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GroupDTOS"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DepGroupName") != m.end() && !m["DepGroupName"].empty()) {
      depGroupName = make_shared<string>(boost::any_cast<string>(m["DepGroupName"]));
    }
    if (m.find("DepGroupId") != m.end() && !m["DepGroupId"].empty()) {
      depGroupId = make_shared<string>(boost::any_cast<string>(m["DepGroupId"]));
    }
    if (m.find("GroupDTOS") != m.end() && !m["GroupDTOS"].empty()) {
      if (typeid(vector<boost::any>) == m["GroupDTOS"].type()) {
        vector<GetDepGroupTreeDataResponseBodyDataGroupDTOS> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GroupDTOS"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDepGroupTreeDataResponseBodyDataGroupDTOS model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groupDTOS = make_shared<vector<GetDepGroupTreeDataResponseBodyDataGroupDTOS>>(expect1);
      }
    }
  }


  virtual ~GetDepGroupTreeDataResponseBodyData() = default;
};
class GetDepGroupTreeDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};
  shared_ptr<vector<GetDepGroupTreeDataResponseBodyData>> data{};

  GetDepGroupTreeDataResponseBody() {}

  explicit GetDepGroupTreeDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetDepGroupTreeDataResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDepGroupTreeDataResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetDepGroupTreeDataResponseBodyData>>(expect1);
      }
    }
  }


  virtual ~GetDepGroupTreeDataResponseBody() = default;
};
class GetDepGroupTreeDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDepGroupTreeDataResponseBody> body{};

  GetDepGroupTreeDataResponse() {}

  explicit GetDepGroupTreeDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDepGroupTreeDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDepGroupTreeDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetDepGroupTreeDataResponse() = default;
};
class DeleteAgentRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  DeleteAgentRequest() {}

  explicit DeleteAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~DeleteAgentRequest() = default;
};
class DeleteAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  DeleteAgentResponseBody() {}

  explicit DeleteAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~DeleteAgentResponseBody() = default;
};
class DeleteAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAgentResponseBody> body{};

  DeleteAgentResponse() {}

  explicit DeleteAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAgentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAgentResponse() = default;
};
class GetCustomerInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> memberId{};

  GetCustomerInfoRequest() {}

  explicit GetCustomerInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
  }


  virtual ~GetCustomerInfoRequest() = default;
};
class GetCustomerInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> nick{};
  shared_ptr<string> photo{};
  shared_ptr<long> userId{};
  shared_ptr<string> realName{};
  shared_ptr<string> outerId{};
  shared_ptr<map<string, boost::any>> customizeFields{};

  GetCustomerInfoResponseBodyData() {}

  explicit GetCustomerInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nick) {
      res["Nick"] = boost::any(*nick);
    }
    if (photo) {
      res["Photo"] = boost::any(*photo);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (realName) {
      res["RealName"] = boost::any(*realName);
    }
    if (outerId) {
      res["OuterId"] = boost::any(*outerId);
    }
    if (customizeFields) {
      res["CustomizeFields"] = boost::any(*customizeFields);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nick") != m.end() && !m["Nick"].empty()) {
      nick = make_shared<string>(boost::any_cast<string>(m["Nick"]));
    }
    if (m.find("Photo") != m.end() && !m["Photo"].empty()) {
      photo = make_shared<string>(boost::any_cast<string>(m["Photo"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("RealName") != m.end() && !m["RealName"].empty()) {
      realName = make_shared<string>(boost::any_cast<string>(m["RealName"]));
    }
    if (m.find("OuterId") != m.end() && !m["OuterId"].empty()) {
      outerId = make_shared<string>(boost::any_cast<string>(m["OuterId"]));
    }
    if (m.find("CustomizeFields") != m.end() && !m["CustomizeFields"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CustomizeFields"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customizeFields = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetCustomerInfoResponseBodyData() = default;
};
class GetCustomerInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<GetCustomerInfoResponseBodyData> data{};

  GetCustomerInfoResponseBody() {}

  explicit GetCustomerInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetCustomerInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCustomerInfoResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetCustomerInfoResponseBody() = default;
};
class GetCustomerInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCustomerInfoResponseBody> body{};

  GetCustomerInfoResponse() {}

  explicit GetCustomerInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetCustomerInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCustomerInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetCustomerInfoResponse() = default;
};
class GetHotlineAgentDetailReportRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<int>> depIds{};
  shared_ptr<vector<int>> groupIds{};

  GetHotlineAgentDetailReportRequest() {}

  explicit GetHotlineAgentDetailReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["DepIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      depIds = make_shared<vector<int>>(toVec1);
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      groupIds = make_shared<vector<int>>(toVec1);
    }
  }


  virtual ~GetHotlineAgentDetailReportRequest() = default;
};
class GetHotlineAgentDetailReportResponseBodyDataColumns : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> title{};

  GetHotlineAgentDetailReportResponseBodyDataColumns() {}

  explicit GetHotlineAgentDetailReportResponseBodyDataColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetHotlineAgentDetailReportResponseBodyDataColumns() = default;
};
class GetHotlineAgentDetailReportResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> rows{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<vector<GetHotlineAgentDetailReportResponseBodyDataColumns>> columns{};
  shared_ptr<long> page{};

  GetHotlineAgentDetailReportResponseBodyData() {}

  explicit GetHotlineAgentDetailReportResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (columns) {
      vector<boost::any> temp1;
      for(auto item1:*columns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Columns"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Rows"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Rows"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      rows = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Columns") != m.end() && !m["Columns"].empty()) {
      if (typeid(vector<boost::any>) == m["Columns"].type()) {
        vector<GetHotlineAgentDetailReportResponseBodyDataColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Columns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHotlineAgentDetailReportResponseBodyDataColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columns = make_shared<vector<GetHotlineAgentDetailReportResponseBodyDataColumns>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
  }


  virtual ~GetHotlineAgentDetailReportResponseBodyData() = default;
};
class GetHotlineAgentDetailReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetHotlineAgentDetailReportResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};

  GetHotlineAgentDetailReportResponseBody() {}

  explicit GetHotlineAgentDetailReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetHotlineAgentDetailReportResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetHotlineAgentDetailReportResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~GetHotlineAgentDetailReportResponseBody() = default;
};
class GetHotlineAgentDetailReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHotlineAgentDetailReportResponseBody> body{};

  GetHotlineAgentDetailReportResponse() {}

  explicit GetHotlineAgentDetailReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHotlineAgentDetailReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotlineAgentDetailReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotlineAgentDetailReportResponse() = default;
};
class SendCcoSmartCallRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> calledShowNumber{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> voiceCode{};
  shared_ptr<string> outId{};
  shared_ptr<long> playTimes{};
  shared_ptr<long> volume{};
  shared_ptr<long> speed{};
  shared_ptr<string> asrModelId{};
  shared_ptr<string> asrBaseId{};
  shared_ptr<string> asrAlsAmId{};
  shared_ptr<string> asrVocabularyId{};
  shared_ptr<bool> recordFlag{};
  shared_ptr<long> pauseTime{};
  shared_ptr<long> muteTime{};
  shared_ptr<bool> actionCodeBreak{};
  shared_ptr<string> dynamicId{};
  shared_ptr<bool> earlyMediaAsr{};
  shared_ptr<string> voiceCodeParam{};
  shared_ptr<long> sessionTimeout{};
  shared_ptr<long> actionCodeTimeBreak{};
  shared_ptr<bool> ttsConf{};
  shared_ptr<string> ttsStyle{};
  shared_ptr<long> ttsVolume{};
  shared_ptr<long> ttsSpeed{};

  SendCcoSmartCallRequest() {}

  explicit SendCcoSmartCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (calledShowNumber) {
      res["CalledShowNumber"] = boost::any(*calledShowNumber);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (voiceCode) {
      res["VoiceCode"] = boost::any(*voiceCode);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (playTimes) {
      res["PlayTimes"] = boost::any(*playTimes);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (asrModelId) {
      res["AsrModelId"] = boost::any(*asrModelId);
    }
    if (asrBaseId) {
      res["AsrBaseId"] = boost::any(*asrBaseId);
    }
    if (asrAlsAmId) {
      res["AsrAlsAmId"] = boost::any(*asrAlsAmId);
    }
    if (asrVocabularyId) {
      res["AsrVocabularyId"] = boost::any(*asrVocabularyId);
    }
    if (recordFlag) {
      res["RecordFlag"] = boost::any(*recordFlag);
    }
    if (pauseTime) {
      res["PauseTime"] = boost::any(*pauseTime);
    }
    if (muteTime) {
      res["MuteTime"] = boost::any(*muteTime);
    }
    if (actionCodeBreak) {
      res["ActionCodeBreak"] = boost::any(*actionCodeBreak);
    }
    if (dynamicId) {
      res["DynamicId"] = boost::any(*dynamicId);
    }
    if (earlyMediaAsr) {
      res["EarlyMediaAsr"] = boost::any(*earlyMediaAsr);
    }
    if (voiceCodeParam) {
      res["VoiceCodeParam"] = boost::any(*voiceCodeParam);
    }
    if (sessionTimeout) {
      res["SessionTimeout"] = boost::any(*sessionTimeout);
    }
    if (actionCodeTimeBreak) {
      res["ActionCodeTimeBreak"] = boost::any(*actionCodeTimeBreak);
    }
    if (ttsConf) {
      res["TtsConf"] = boost::any(*ttsConf);
    }
    if (ttsStyle) {
      res["TtsStyle"] = boost::any(*ttsStyle);
    }
    if (ttsVolume) {
      res["TtsVolume"] = boost::any(*ttsVolume);
    }
    if (ttsSpeed) {
      res["TtsSpeed"] = boost::any(*ttsSpeed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("CalledShowNumber") != m.end() && !m["CalledShowNumber"].empty()) {
      calledShowNumber = make_shared<string>(boost::any_cast<string>(m["CalledShowNumber"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("VoiceCode") != m.end() && !m["VoiceCode"].empty()) {
      voiceCode = make_shared<string>(boost::any_cast<string>(m["VoiceCode"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("PlayTimes") != m.end() && !m["PlayTimes"].empty()) {
      playTimes = make_shared<long>(boost::any_cast<long>(m["PlayTimes"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<long>(boost::any_cast<long>(m["Speed"]));
    }
    if (m.find("AsrModelId") != m.end() && !m["AsrModelId"].empty()) {
      asrModelId = make_shared<string>(boost::any_cast<string>(m["AsrModelId"]));
    }
    if (m.find("AsrBaseId") != m.end() && !m["AsrBaseId"].empty()) {
      asrBaseId = make_shared<string>(boost::any_cast<string>(m["AsrBaseId"]));
    }
    if (m.find("AsrAlsAmId") != m.end() && !m["AsrAlsAmId"].empty()) {
      asrAlsAmId = make_shared<string>(boost::any_cast<string>(m["AsrAlsAmId"]));
    }
    if (m.find("AsrVocabularyId") != m.end() && !m["AsrVocabularyId"].empty()) {
      asrVocabularyId = make_shared<string>(boost::any_cast<string>(m["AsrVocabularyId"]));
    }
    if (m.find("RecordFlag") != m.end() && !m["RecordFlag"].empty()) {
      recordFlag = make_shared<bool>(boost::any_cast<bool>(m["RecordFlag"]));
    }
    if (m.find("PauseTime") != m.end() && !m["PauseTime"].empty()) {
      pauseTime = make_shared<long>(boost::any_cast<long>(m["PauseTime"]));
    }
    if (m.find("MuteTime") != m.end() && !m["MuteTime"].empty()) {
      muteTime = make_shared<long>(boost::any_cast<long>(m["MuteTime"]));
    }
    if (m.find("ActionCodeBreak") != m.end() && !m["ActionCodeBreak"].empty()) {
      actionCodeBreak = make_shared<bool>(boost::any_cast<bool>(m["ActionCodeBreak"]));
    }
    if (m.find("DynamicId") != m.end() && !m["DynamicId"].empty()) {
      dynamicId = make_shared<string>(boost::any_cast<string>(m["DynamicId"]));
    }
    if (m.find("EarlyMediaAsr") != m.end() && !m["EarlyMediaAsr"].empty()) {
      earlyMediaAsr = make_shared<bool>(boost::any_cast<bool>(m["EarlyMediaAsr"]));
    }
    if (m.find("VoiceCodeParam") != m.end() && !m["VoiceCodeParam"].empty()) {
      voiceCodeParam = make_shared<string>(boost::any_cast<string>(m["VoiceCodeParam"]));
    }
    if (m.find("SessionTimeout") != m.end() && !m["SessionTimeout"].empty()) {
      sessionTimeout = make_shared<long>(boost::any_cast<long>(m["SessionTimeout"]));
    }
    if (m.find("ActionCodeTimeBreak") != m.end() && !m["ActionCodeTimeBreak"].empty()) {
      actionCodeTimeBreak = make_shared<long>(boost::any_cast<long>(m["ActionCodeTimeBreak"]));
    }
    if (m.find("TtsConf") != m.end() && !m["TtsConf"].empty()) {
      ttsConf = make_shared<bool>(boost::any_cast<bool>(m["TtsConf"]));
    }
    if (m.find("TtsStyle") != m.end() && !m["TtsStyle"].empty()) {
      ttsStyle = make_shared<string>(boost::any_cast<string>(m["TtsStyle"]));
    }
    if (m.find("TtsVolume") != m.end() && !m["TtsVolume"].empty()) {
      ttsVolume = make_shared<long>(boost::any_cast<long>(m["TtsVolume"]));
    }
    if (m.find("TtsSpeed") != m.end() && !m["TtsSpeed"].empty()) {
      ttsSpeed = make_shared<long>(boost::any_cast<long>(m["TtsSpeed"]));
    }
  }


  virtual ~SendCcoSmartCallRequest() = default;
};
class SendCcoSmartCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};

  SendCcoSmartCallResponseBody() {}

  explicit SendCcoSmartCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~SendCcoSmartCallResponseBody() = default;
};
class SendCcoSmartCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SendCcoSmartCallResponseBody> body{};

  SendCcoSmartCallResponse() {}

  explicit SendCcoSmartCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SendCcoSmartCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendCcoSmartCallResponseBody>(model1);
      }
    }
  }


  virtual ~SendCcoSmartCallResponse() = default;
};
class ListChatRecordDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> closeTimeEnd{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> closeTimeStart{};

  ListChatRecordDetailRequest() {}

  explicit ListChatRecordDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (closeTimeEnd) {
      res["CloseTimeEnd"] = boost::any(*closeTimeEnd);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (closeTimeStart) {
      res["CloseTimeStart"] = boost::any(*closeTimeStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("CloseTimeEnd") != m.end() && !m["CloseTimeEnd"].empty()) {
      closeTimeEnd = make_shared<long>(boost::any_cast<long>(m["CloseTimeEnd"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CloseTimeStart") != m.end() && !m["CloseTimeStart"].empty()) {
      closeTimeStart = make_shared<long>(boost::any_cast<long>(m["CloseTimeStart"]));
    }
  }


  virtual ~ListChatRecordDetailRequest() = default;
};
class ListChatRecordDetailResponseBodyResultDataDataMessageList : public Darabonba::Model {
public:
  shared_ptr<string> senderName{};
  shared_ptr<string> content{};
  shared_ptr<long> senderType{};
  shared_ptr<long> createTime{};
  shared_ptr<string> msgType{};

  ListChatRecordDetailResponseBodyResultDataDataMessageList() {}

  explicit ListChatRecordDetailResponseBodyResultDataDataMessageList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (senderName) {
      res["SenderName"] = boost::any(*senderName);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (senderType) {
      res["SenderType"] = boost::any(*senderType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (msgType) {
      res["MsgType"] = boost::any(*msgType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SenderName") != m.end() && !m["SenderName"].empty()) {
      senderName = make_shared<string>(boost::any_cast<string>(m["SenderName"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("SenderType") != m.end() && !m["SenderType"].empty()) {
      senderType = make_shared<long>(boost::any_cast<long>(m["SenderType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("MsgType") != m.end() && !m["MsgType"].empty()) {
      msgType = make_shared<string>(boost::any_cast<string>(m["MsgType"]));
    }
  }


  virtual ~ListChatRecordDetailResponseBodyResultDataDataMessageList() = default;
};
class ListChatRecordDetailResponseBodyResultDataData : public Darabonba::Model {
public:
  shared_ptr<string> servicerName{};
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};
  shared_ptr<vector<ListChatRecordDetailResponseBodyResultDataDataMessageList>> messageList{};

  ListChatRecordDetailResponseBodyResultDataData() {}

  explicit ListChatRecordDetailResponseBodyResultDataData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (servicerName) {
      res["ServicerName"] = boost::any(*servicerName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (messageList) {
      vector<boost::any> temp1;
      for(auto item1:*messageList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MessageList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServicerName") != m.end() && !m["ServicerName"].empty()) {
      servicerName = make_shared<string>(boost::any_cast<string>(m["ServicerName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("MessageList") != m.end() && !m["MessageList"].empty()) {
      if (typeid(vector<boost::any>) == m["MessageList"].type()) {
        vector<ListChatRecordDetailResponseBodyResultDataDataMessageList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MessageList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChatRecordDetailResponseBodyResultDataDataMessageList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messageList = make_shared<vector<ListChatRecordDetailResponseBodyResultDataDataMessageList>>(expect1);
      }
    }
  }


  virtual ~ListChatRecordDetailResponseBodyResultDataData() = default;
};
class ListChatRecordDetailResponseBodyResultData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> totalResults{};
  shared_ptr<long> totalPage{};
  shared_ptr<long> onePageSize{};
  shared_ptr<vector<ListChatRecordDetailResponseBodyResultDataData>> data{};

  ListChatRecordDetailResponseBodyResultData() {}

  explicit ListChatRecordDetailResponseBodyResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (totalResults) {
      res["TotalResults"] = boost::any(*totalResults);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (onePageSize) {
      res["OnePageSize"] = boost::any(*onePageSize);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("TotalResults") != m.end() && !m["TotalResults"].empty()) {
      totalResults = make_shared<long>(boost::any_cast<long>(m["TotalResults"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("OnePageSize") != m.end() && !m["OnePageSize"].empty()) {
      onePageSize = make_shared<long>(boost::any_cast<long>(m["OnePageSize"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListChatRecordDetailResponseBodyResultDataData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChatRecordDetailResponseBodyResultDataData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListChatRecordDetailResponseBodyResultDataData>>(expect1);
      }
    }
  }


  virtual ~ListChatRecordDetailResponseBodyResultData() = default;
};
class ListChatRecordDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<ListChatRecordDetailResponseBodyResultData> resultData{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ListChatRecordDetailResponseBody() {}

  explicit ListChatRecordDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (resultData) {
      res["ResultData"] = resultData ? boost::any(resultData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("ResultData") != m.end() && !m["ResultData"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultData"].type()) {
        ListChatRecordDetailResponseBodyResultData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultData"]));
        resultData = make_shared<ListChatRecordDetailResponseBodyResultData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListChatRecordDetailResponseBody() = default;
};
class ListChatRecordDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListChatRecordDetailResponseBody> body{};

  ListChatRecordDetailResponse() {}

  explicit ListChatRecordDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListChatRecordDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChatRecordDetailResponseBody>(model1);
      }
    }
  }


  virtual ~ListChatRecordDetailResponse() = default;
};
class AddSkillGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> outerGroupId{};
  shared_ptr<string> outerGroupName{};
  shared_ptr<string> outerGroupType{};
  shared_ptr<string> outerDepartmentId{};
  shared_ptr<string> outerDepartmentType{};

  AddSkillGroupRequest() {}

  explicit AddSkillGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outerGroupId) {
      res["OuterGroupId"] = boost::any(*outerGroupId);
    }
    if (outerGroupName) {
      res["OuterGroupName"] = boost::any(*outerGroupName);
    }
    if (outerGroupType) {
      res["OuterGroupType"] = boost::any(*outerGroupType);
    }
    if (outerDepartmentId) {
      res["OuterDepartmentId"] = boost::any(*outerDepartmentId);
    }
    if (outerDepartmentType) {
      res["OuterDepartmentType"] = boost::any(*outerDepartmentType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OuterGroupId") != m.end() && !m["OuterGroupId"].empty()) {
      outerGroupId = make_shared<string>(boost::any_cast<string>(m["OuterGroupId"]));
    }
    if (m.find("OuterGroupName") != m.end() && !m["OuterGroupName"].empty()) {
      outerGroupName = make_shared<string>(boost::any_cast<string>(m["OuterGroupName"]));
    }
    if (m.find("OuterGroupType") != m.end() && !m["OuterGroupType"].empty()) {
      outerGroupType = make_shared<string>(boost::any_cast<string>(m["OuterGroupType"]));
    }
    if (m.find("OuterDepartmentId") != m.end() && !m["OuterDepartmentId"].empty()) {
      outerDepartmentId = make_shared<string>(boost::any_cast<string>(m["OuterDepartmentId"]));
    }
    if (m.find("OuterDepartmentType") != m.end() && !m["OuterDepartmentType"].empty()) {
      outerDepartmentType = make_shared<string>(boost::any_cast<string>(m["OuterDepartmentType"]));
    }
  }


  virtual ~AddSkillGroupRequest() = default;
};
class AddSkillGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  AddSkillGroupResponseBody() {}

  explicit AddSkillGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddSkillGroupResponseBody() = default;
};
class AddSkillGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddSkillGroupResponseBody> body{};

  AddSkillGroupResponse() {}

  explicit AddSkillGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddSkillGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddSkillGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AddSkillGroupResponse() = default;
};
class HangupCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> callId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> connectionId{};

  HangupCallRequest() {}

  explicit HangupCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
  }


  virtual ~HangupCallRequest() = default;
};
class HangupCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  HangupCallResponseBody() {}

  explicit HangupCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~HangupCallResponseBody() = default;
};
class HangupCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<HangupCallResponseBody> body{};

  HangupCallResponse() {}

  explicit HangupCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        HangupCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HangupCallResponseBody>(model1);
      }
    }
  }


  virtual ~HangupCallResponse() = default;
};
class DeleteSkillGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> outerGroupType{};
  shared_ptr<string> outerGroupId{};

  DeleteSkillGroupRequest() {}

  explicit DeleteSkillGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outerGroupType) {
      res["OuterGroupType"] = boost::any(*outerGroupType);
    }
    if (outerGroupId) {
      res["OuterGroupId"] = boost::any(*outerGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OuterGroupType") != m.end() && !m["OuterGroupType"].empty()) {
      outerGroupType = make_shared<string>(boost::any_cast<string>(m["OuterGroupType"]));
    }
    if (m.find("OuterGroupId") != m.end() && !m["OuterGroupId"].empty()) {
      outerGroupId = make_shared<string>(boost::any_cast<string>(m["OuterGroupId"]));
    }
  }


  virtual ~DeleteSkillGroupRequest() = default;
};
class DeleteSkillGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DeleteSkillGroupResponseBody() {}

  explicit DeleteSkillGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteSkillGroupResponseBody() = default;
};
class DeleteSkillGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteSkillGroupResponseBody> body{};

  DeleteSkillGroupResponse() {}

  explicit DeleteSkillGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteSkillGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSkillGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSkillGroupResponse() = default;
};
class CreateQualityProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<long> checkFreqType{};
  shared_ptr<long> scopeType{};
  shared_ptr<string> timeRangeStart{};
  shared_ptr<string> timeRangeEnd{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<int>> channelTouchType{};
  shared_ptr<vector<int>> depList{};
  shared_ptr<vector<int>> groupList{};
  shared_ptr<vector<string>> servicerList{};
  shared_ptr<vector<int>> analysisIds{};

  CreateQualityProjectRequest() {}

  explicit CreateQualityProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (checkFreqType) {
      res["CheckFreqType"] = boost::any(*checkFreqType);
    }
    if (scopeType) {
      res["ScopeType"] = boost::any(*scopeType);
    }
    if (timeRangeStart) {
      res["TimeRangeStart"] = boost::any(*timeRangeStart);
    }
    if (timeRangeEnd) {
      res["TimeRangeEnd"] = boost::any(*timeRangeEnd);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (channelTouchType) {
      res["ChannelTouchType"] = boost::any(*channelTouchType);
    }
    if (depList) {
      res["DepList"] = boost::any(*depList);
    }
    if (groupList) {
      res["GroupList"] = boost::any(*groupList);
    }
    if (servicerList) {
      res["ServicerList"] = boost::any(*servicerList);
    }
    if (analysisIds) {
      res["AnalysisIds"] = boost::any(*analysisIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("CheckFreqType") != m.end() && !m["CheckFreqType"].empty()) {
      checkFreqType = make_shared<long>(boost::any_cast<long>(m["CheckFreqType"]));
    }
    if (m.find("ScopeType") != m.end() && !m["ScopeType"].empty()) {
      scopeType = make_shared<long>(boost::any_cast<long>(m["ScopeType"]));
    }
    if (m.find("TimeRangeStart") != m.end() && !m["TimeRangeStart"].empty()) {
      timeRangeStart = make_shared<string>(boost::any_cast<string>(m["TimeRangeStart"]));
    }
    if (m.find("TimeRangeEnd") != m.end() && !m["TimeRangeEnd"].empty()) {
      timeRangeEnd = make_shared<string>(boost::any_cast<string>(m["TimeRangeEnd"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ChannelTouchType") != m.end() && !m["ChannelTouchType"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["ChannelTouchType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChannelTouchType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      channelTouchType = make_shared<vector<int>>(toVec1);
    }
    if (m.find("DepList") != m.end() && !m["DepList"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["DepList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      depList = make_shared<vector<int>>(toVec1);
    }
    if (m.find("GroupList") != m.end() && !m["GroupList"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["GroupList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      groupList = make_shared<vector<int>>(toVec1);
    }
    if (m.find("ServicerList") != m.end() && !m["ServicerList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServicerList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServicerList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      servicerList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AnalysisIds") != m.end() && !m["AnalysisIds"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["AnalysisIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AnalysisIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      analysisIds = make_shared<vector<int>>(toVec1);
    }
  }


  virtual ~CreateQualityProjectRequest() = default;
};
class CreateQualityProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> version{};
  shared_ptr<long> projectId{};
  shared_ptr<string> instanceId{};

  CreateQualityProjectResponseBodyData() {}

  explicit CreateQualityProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CreateQualityProjectResponseBodyData() = default;
};
class CreateQualityProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateQualityProjectResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  CreateQualityProjectResponseBody() {}

  explicit CreateQualityProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateQualityProjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateQualityProjectResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateQualityProjectResponseBody() = default;
};
class CreateQualityProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateQualityProjectResponseBody> body{};

  CreateQualityProjectResponse() {}

  explicit CreateQualityProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateQualityProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateQualityProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateQualityProjectResponse() = default;
};
class QuerySkillGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> clientToken{};

  QuerySkillGroupsRequest() {}

  explicit QuerySkillGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~QuerySkillGroupsRequest() = default;
};
class QuerySkillGroupsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> description{};
  shared_ptr<long> channelType{};
  shared_ptr<string> skillGroupName{};
  shared_ptr<long> skillGroupId{};

  QuerySkillGroupsResponseBodyData() {}

  explicit QuerySkillGroupsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (skillGroupName) {
      res["SkillGroupName"] = boost::any(*skillGroupName);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<long>(boost::any_cast<long>(m["ChannelType"]));
    }
    if (m.find("SkillGroupName") != m.end() && !m["SkillGroupName"].empty()) {
      skillGroupName = make_shared<string>(boost::any_cast<string>(m["SkillGroupName"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<long>(boost::any_cast<long>(m["SkillGroupId"]));
    }
  }


  virtual ~QuerySkillGroupsResponseBodyData() = default;
};
class QuerySkillGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> onePageSize{};
  shared_ptr<long> totalPage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> totalResults{};
  shared_ptr<vector<QuerySkillGroupsResponseBodyData>> data{};

  QuerySkillGroupsResponseBody() {}

  explicit QuerySkillGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onePageSize) {
      res["OnePageSize"] = boost::any(*onePageSize);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (totalResults) {
      res["TotalResults"] = boost::any(*totalResults);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OnePageSize") != m.end() && !m["OnePageSize"].empty()) {
      onePageSize = make_shared<long>(boost::any_cast<long>(m["OnePageSize"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("TotalResults") != m.end() && !m["TotalResults"].empty()) {
      totalResults = make_shared<long>(boost::any_cast<long>(m["TotalResults"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QuerySkillGroupsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySkillGroupsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QuerySkillGroupsResponseBodyData>>(expect1);
      }
    }
  }


  virtual ~QuerySkillGroupsResponseBody() = default;
};
class QuerySkillGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QuerySkillGroupsResponseBody> body{};

  QuerySkillGroupsResponse() {}

  explicit QuerySkillGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QuerySkillGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySkillGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySkillGroupsResponse() = default;
};
class CreateQualityRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<long> ruleTag{};
  shared_ptr<long> matchType{};
  shared_ptr<vector<string>> keyWords{};

  CreateQualityRuleRequest() {}

  explicit CreateQualityRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ruleTag) {
      res["RuleTag"] = boost::any(*ruleTag);
    }
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (keyWords) {
      res["KeyWords"] = boost::any(*keyWords);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RuleTag") != m.end() && !m["RuleTag"].empty()) {
      ruleTag = make_shared<long>(boost::any_cast<long>(m["RuleTag"]));
    }
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<long>(boost::any_cast<long>(m["MatchType"]));
    }
    if (m.find("KeyWords") != m.end() && !m["KeyWords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["KeyWords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["KeyWords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keyWords = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateQualityRuleRequest() = default;
};
class CreateQualityRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  CreateQualityRuleResponseBody() {}

  explicit CreateQualityRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateQualityRuleResponseBody() = default;
};
class CreateQualityRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateQualityRuleResponseBody> body{};

  CreateQualityRuleResponse() {}

  explicit CreateQualityRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateQualityRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateQualityRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateQualityRuleResponse() = default;
};
class ListRolesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};

  ListRolesRequest() {}

  explicit ListRolesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ListRolesRequest() = default;
};
class ListRolesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> roleId{};
  shared_ptr<string> createTime{};
  shared_ptr<long> buId{};
  shared_ptr<string> title{};
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<long> roleGroupId{};
  shared_ptr<string> roleGroupName{};

  ListRolesResponseBodyData() {}

  explicit ListRolesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (buId) {
      res["BuId"] = boost::any(*buId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (roleGroupId) {
      res["RoleGroupId"] = boost::any(*roleGroupId);
    }
    if (roleGroupName) {
      res["RoleGroupName"] = boost::any(*roleGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<long>(boost::any_cast<long>(m["RoleId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("BuId") != m.end() && !m["BuId"].empty()) {
      buId = make_shared<long>(boost::any_cast<long>(m["BuId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RoleGroupId") != m.end() && !m["RoleGroupId"].empty()) {
      roleGroupId = make_shared<long>(boost::any_cast<long>(m["RoleGroupId"]));
    }
    if (m.find("RoleGroupName") != m.end() && !m["RoleGroupName"].empty()) {
      roleGroupName = make_shared<string>(boost::any_cast<string>(m["RoleGroupName"]));
    }
  }


  virtual ~ListRolesResponseBodyData() = default;
};
class ListRolesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<vector<ListRolesResponseBodyData>> data{};
  shared_ptr<bool> success{};

  ListRolesResponseBody() {}

  explicit ListRolesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListRolesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRolesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListRolesResponseBodyData>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListRolesResponseBody() = default;
};
class ListRolesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRolesResponseBody> body{};

  ListRolesResponse() {}

  explicit ListRolesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListRolesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRolesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRolesResponse() = default;
};
class GetHotlineCallActionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<long> act{};
  shared_ptr<string> fromSource{};
  shared_ptr<string> biz{};
  shared_ptr<string> acc{};

  GetHotlineCallActionRequest() {}

  explicit GetHotlineCallActionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (act) {
      res["Act"] = boost::any(*act);
    }
    if (fromSource) {
      res["FromSource"] = boost::any(*fromSource);
    }
    if (biz) {
      res["Biz"] = boost::any(*biz);
    }
    if (acc) {
      res["Acc"] = boost::any(*acc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("Act") != m.end() && !m["Act"].empty()) {
      act = make_shared<long>(boost::any_cast<long>(m["Act"]));
    }
    if (m.find("FromSource") != m.end() && !m["FromSource"].empty()) {
      fromSource = make_shared<string>(boost::any_cast<string>(m["FromSource"]));
    }
    if (m.find("Biz") != m.end() && !m["Biz"].empty()) {
      biz = make_shared<string>(boost::any_cast<string>(m["Biz"]));
    }
    if (m.find("Acc") != m.end() && !m["Acc"].empty()) {
      acc = make_shared<string>(boost::any_cast<string>(m["Acc"]));
    }
  }


  virtual ~GetHotlineCallActionRequest() = default;
};
class GetHotlineCallActionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> touchId{};
  shared_ptr<long> depId{};
  shared_ptr<string> memberName{};
  shared_ptr<string> servicerName{};
  shared_ptr<long> channelType{};
  shared_ptr<long> actionId{};
  shared_ptr<string> calloutName{};
  shared_ptr<long> subTouchId{};
  shared_ptr<long> servicerId{};
  shared_ptr<long> buId{};
  shared_ptr<long> calloutId{};
  shared_ptr<long> caseId{};
  shared_ptr<string> channelId{};
  shared_ptr<string> isTransfer{};
  shared_ptr<long> memberId{};
  shared_ptr<long> taskId{};
  shared_ptr<string> memberList{};

  GetHotlineCallActionResponseBodyData() {}

  explicit GetHotlineCallActionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (touchId) {
      res["TouchId"] = boost::any(*touchId);
    }
    if (depId) {
      res["DepId"] = boost::any(*depId);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (servicerName) {
      res["ServicerName"] = boost::any(*servicerName);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (actionId) {
      res["ActionId"] = boost::any(*actionId);
    }
    if (calloutName) {
      res["CalloutName"] = boost::any(*calloutName);
    }
    if (subTouchId) {
      res["SubTouchId"] = boost::any(*subTouchId);
    }
    if (servicerId) {
      res["ServicerId"] = boost::any(*servicerId);
    }
    if (buId) {
      res["BuId"] = boost::any(*buId);
    }
    if (calloutId) {
      res["CalloutId"] = boost::any(*calloutId);
    }
    if (caseId) {
      res["CaseId"] = boost::any(*caseId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (isTransfer) {
      res["IsTransfer"] = boost::any(*isTransfer);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (memberList) {
      res["MemberList"] = boost::any(*memberList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TouchId") != m.end() && !m["TouchId"].empty()) {
      touchId = make_shared<long>(boost::any_cast<long>(m["TouchId"]));
    }
    if (m.find("DepId") != m.end() && !m["DepId"].empty()) {
      depId = make_shared<long>(boost::any_cast<long>(m["DepId"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("ServicerName") != m.end() && !m["ServicerName"].empty()) {
      servicerName = make_shared<string>(boost::any_cast<string>(m["ServicerName"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<long>(boost::any_cast<long>(m["ChannelType"]));
    }
    if (m.find("ActionId") != m.end() && !m["ActionId"].empty()) {
      actionId = make_shared<long>(boost::any_cast<long>(m["ActionId"]));
    }
    if (m.find("CalloutName") != m.end() && !m["CalloutName"].empty()) {
      calloutName = make_shared<string>(boost::any_cast<string>(m["CalloutName"]));
    }
    if (m.find("SubTouchId") != m.end() && !m["SubTouchId"].empty()) {
      subTouchId = make_shared<long>(boost::any_cast<long>(m["SubTouchId"]));
    }
    if (m.find("ServicerId") != m.end() && !m["ServicerId"].empty()) {
      servicerId = make_shared<long>(boost::any_cast<long>(m["ServicerId"]));
    }
    if (m.find("BuId") != m.end() && !m["BuId"].empty()) {
      buId = make_shared<long>(boost::any_cast<long>(m["BuId"]));
    }
    if (m.find("CalloutId") != m.end() && !m["CalloutId"].empty()) {
      calloutId = make_shared<long>(boost::any_cast<long>(m["CalloutId"]));
    }
    if (m.find("CaseId") != m.end() && !m["CaseId"].empty()) {
      caseId = make_shared<long>(boost::any_cast<long>(m["CaseId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("IsTransfer") != m.end() && !m["IsTransfer"].empty()) {
      isTransfer = make_shared<string>(boost::any_cast<string>(m["IsTransfer"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("MemberList") != m.end() && !m["MemberList"].empty()) {
      memberList = make_shared<string>(boost::any_cast<string>(m["MemberList"]));
    }
  }


  virtual ~GetHotlineCallActionResponseBodyData() = default;
};
class GetHotlineCallActionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetHotlineCallActionResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetHotlineCallActionResponseBody() {}

  explicit GetHotlineCallActionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetHotlineCallActionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetHotlineCallActionResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetHotlineCallActionResponseBody() = default;
};
class GetHotlineCallActionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHotlineCallActionResponseBody> body{};

  GetHotlineCallActionResponse() {}

  explicit GetHotlineCallActionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHotlineCallActionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotlineCallActionResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotlineCallActionResponse() = default;
};
class ListSkillGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> channelType{};

  ListSkillGroupRequest() {}

  explicit ListSkillGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<long>(boost::any_cast<long>(m["ChannelType"]));
    }
  }


  virtual ~ListSkillGroupRequest() = default;
};
class ListSkillGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> description{};
  shared_ptr<long> channelType{};
  shared_ptr<long> skillGroupId{};
  shared_ptr<string> name{};

  ListSkillGroupResponseBodyData() {}

  explicit ListSkillGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<long>(boost::any_cast<long>(m["ChannelType"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<long>(boost::any_cast<long>(m["SkillGroupId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListSkillGroupResponseBodyData() = default;
};
class ListSkillGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSkillGroupResponseBodyData>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ListSkillGroupResponseBody() {}

  explicit ListSkillGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListSkillGroupResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSkillGroupResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListSkillGroupResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListSkillGroupResponseBody() = default;
};
class ListSkillGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSkillGroupResponseBody> body{};

  ListSkillGroupResponse() {}

  explicit ListSkillGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSkillGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSkillGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListSkillGroupResponse() = default;
};
class GetOnlineSeatInformationRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<long>> agentIds{};
  shared_ptr<vector<long>> depIds{};

  GetOnlineSeatInformationRequest() {}

  explicit GetOnlineSeatInformationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (agentIds) {
      res["AgentIds"] = boost::any(*agentIds);
    }
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("AgentIds") != m.end() && !m["AgentIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AgentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AgentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      agentIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DepIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      depIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~GetOnlineSeatInformationRequest() = default;
};
class GetOnlineSeatInformationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> agentIdsShrink{};
  shared_ptr<string> depIdsShrink{};

  GetOnlineSeatInformationShrinkRequest() {}

  explicit GetOnlineSeatInformationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (agentIdsShrink) {
      res["AgentIds"] = boost::any(*agentIdsShrink);
    }
    if (depIdsShrink) {
      res["DepIds"] = boost::any(*depIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("AgentIds") != m.end() && !m["AgentIds"].empty()) {
      agentIdsShrink = make_shared<string>(boost::any_cast<string>(m["AgentIds"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      depIdsShrink = make_shared<string>(boost::any_cast<string>(m["DepIds"]));
    }
  }


  virtual ~GetOnlineSeatInformationShrinkRequest() = default;
};
class GetOnlineSeatInformationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<string> rows{};

  GetOnlineSeatInformationResponseBodyData() {}

  explicit GetOnlineSeatInformationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<string>(boost::any_cast<string>(m["Rows"]));
    }
  }


  virtual ~GetOnlineSeatInformationResponseBodyData() = default;
};
class GetOnlineSeatInformationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};
  shared_ptr<GetOnlineSeatInformationResponseBodyData> data{};

  GetOnlineSeatInformationResponseBody() {}

  explicit GetOnlineSeatInformationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetOnlineSeatInformationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetOnlineSeatInformationResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetOnlineSeatInformationResponseBody() = default;
};
class GetOnlineSeatInformationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOnlineSeatInformationResponseBody> body{};

  GetOnlineSeatInformationResponse() {}

  explicit GetOnlineSeatInformationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetOnlineSeatInformationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOnlineSeatInformationResponseBody>(model1);
      }
    }
  }


  virtual ~GetOnlineSeatInformationResponse() = default;
};
class DeleteQualityProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> projectId{};

  DeleteQualityProjectRequest() {}

  explicit DeleteQualityProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~DeleteQualityProjectRequest() = default;
};
class DeleteQualityProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DeleteQualityProjectResponseBody() {}

  explicit DeleteQualityProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteQualityProjectResponseBody() = default;
};
class DeleteQualityProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteQualityProjectResponseBody> body{};

  DeleteQualityProjectResponse() {}

  explicit DeleteQualityProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteQualityProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteQualityProjectResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteQualityProjectResponse() = default;
};
class QueryTouchListRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> firstTimeStart{};
  shared_ptr<long> firstTimeEnd{};
  shared_ptr<long> closeTimeStart{};
  shared_ptr<long> closeTimeEnd{};
  shared_ptr<vector<long>> touchId{};
  shared_ptr<vector<string>> channelId{};
  shared_ptr<vector<long>> channelType{};
  shared_ptr<vector<long>> touchType{};
  shared_ptr<vector<long>> memberId{};
  shared_ptr<vector<string>> memberName{};
  shared_ptr<vector<long>> servicerId{};
  shared_ptr<vector<string>> servicerName{};
  shared_ptr<vector<long>> queueId{};
  shared_ptr<vector<long>> evaluationStatus{};
  shared_ptr<vector<long>> evaluationLevel{};
  shared_ptr<vector<long>> evaluationScore{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};

  QueryTouchListRequest() {}

  explicit QueryTouchListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (firstTimeStart) {
      res["FirstTimeStart"] = boost::any(*firstTimeStart);
    }
    if (firstTimeEnd) {
      res["FirstTimeEnd"] = boost::any(*firstTimeEnd);
    }
    if (closeTimeStart) {
      res["CloseTimeStart"] = boost::any(*closeTimeStart);
    }
    if (closeTimeEnd) {
      res["CloseTimeEnd"] = boost::any(*closeTimeEnd);
    }
    if (touchId) {
      res["TouchId"] = boost::any(*touchId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (touchType) {
      res["TouchType"] = boost::any(*touchType);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (servicerId) {
      res["ServicerId"] = boost::any(*servicerId);
    }
    if (servicerName) {
      res["ServicerName"] = boost::any(*servicerName);
    }
    if (queueId) {
      res["QueueId"] = boost::any(*queueId);
    }
    if (evaluationStatus) {
      res["EvaluationStatus"] = boost::any(*evaluationStatus);
    }
    if (evaluationLevel) {
      res["EvaluationLevel"] = boost::any(*evaluationLevel);
    }
    if (evaluationScore) {
      res["EvaluationScore"] = boost::any(*evaluationScore);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("FirstTimeStart") != m.end() && !m["FirstTimeStart"].empty()) {
      firstTimeStart = make_shared<long>(boost::any_cast<long>(m["FirstTimeStart"]));
    }
    if (m.find("FirstTimeEnd") != m.end() && !m["FirstTimeEnd"].empty()) {
      firstTimeEnd = make_shared<long>(boost::any_cast<long>(m["FirstTimeEnd"]));
    }
    if (m.find("CloseTimeStart") != m.end() && !m["CloseTimeStart"].empty()) {
      closeTimeStart = make_shared<long>(boost::any_cast<long>(m["CloseTimeStart"]));
    }
    if (m.find("CloseTimeEnd") != m.end() && !m["CloseTimeEnd"].empty()) {
      closeTimeEnd = make_shared<long>(boost::any_cast<long>(m["CloseTimeEnd"]));
    }
    if (m.find("TouchId") != m.end() && !m["TouchId"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["TouchId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TouchId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      touchId = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ChannelId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChannelId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channelId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ChannelType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChannelType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      channelType = make_shared<vector<long>>(toVec1);
    }
    if (m.find("TouchType") != m.end() && !m["TouchType"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["TouchType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TouchType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      touchType = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["MemberId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MemberId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      memberId = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MemberName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MemberName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      memberName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ServicerId") != m.end() && !m["ServicerId"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ServicerId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServicerId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      servicerId = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ServicerName") != m.end() && !m["ServicerName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServicerName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServicerName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      servicerName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("QueueId") != m.end() && !m["QueueId"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["QueueId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["QueueId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      queueId = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EvaluationStatus") != m.end() && !m["EvaluationStatus"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["EvaluationStatus"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EvaluationStatus"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      evaluationStatus = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EvaluationLevel") != m.end() && !m["EvaluationLevel"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["EvaluationLevel"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EvaluationLevel"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      evaluationLevel = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EvaluationScore") != m.end() && !m["EvaluationScore"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["EvaluationScore"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EvaluationScore"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      evaluationScore = make_shared<vector<long>>(toVec1);
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
  }


  virtual ~QueryTouchListRequest() = default;
};
class QueryTouchListResponseBodyResultDataDataExtAttrs : public Darabonba::Model {
public:
  shared_ptr<long> evaluationScore{};
  shared_ptr<long> evaluationLevel{};
  shared_ptr<long> evaluationSolution{};
  shared_ptr<long> onlineSessionSource{};
  shared_ptr<long> onlineJoinRespInterval{};
  shared_ptr<long> evaluationStatus{};
  shared_ptr<string> outCallRouteNumber{};
  shared_ptr<string> dnis{};
  shared_ptr<string> ani{};

  QueryTouchListResponseBodyResultDataDataExtAttrs() {}

  explicit QueryTouchListResponseBodyResultDataDataExtAttrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationScore) {
      res["EvaluationScore"] = boost::any(*evaluationScore);
    }
    if (evaluationLevel) {
      res["EvaluationLevel"] = boost::any(*evaluationLevel);
    }
    if (evaluationSolution) {
      res["EvaluationSolution"] = boost::any(*evaluationSolution);
    }
    if (onlineSessionSource) {
      res["OnlineSessionSource"] = boost::any(*onlineSessionSource);
    }
    if (onlineJoinRespInterval) {
      res["OnlineJoinRespInterval"] = boost::any(*onlineJoinRespInterval);
    }
    if (evaluationStatus) {
      res["EvaluationStatus"] = boost::any(*evaluationStatus);
    }
    if (outCallRouteNumber) {
      res["OutCallRouteNumber"] = boost::any(*outCallRouteNumber);
    }
    if (dnis) {
      res["Dnis"] = boost::any(*dnis);
    }
    if (ani) {
      res["Ani"] = boost::any(*ani);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EvaluationScore") != m.end() && !m["EvaluationScore"].empty()) {
      evaluationScore = make_shared<long>(boost::any_cast<long>(m["EvaluationScore"]));
    }
    if (m.find("EvaluationLevel") != m.end() && !m["EvaluationLevel"].empty()) {
      evaluationLevel = make_shared<long>(boost::any_cast<long>(m["EvaluationLevel"]));
    }
    if (m.find("EvaluationSolution") != m.end() && !m["EvaluationSolution"].empty()) {
      evaluationSolution = make_shared<long>(boost::any_cast<long>(m["EvaluationSolution"]));
    }
    if (m.find("OnlineSessionSource") != m.end() && !m["OnlineSessionSource"].empty()) {
      onlineSessionSource = make_shared<long>(boost::any_cast<long>(m["OnlineSessionSource"]));
    }
    if (m.find("OnlineJoinRespInterval") != m.end() && !m["OnlineJoinRespInterval"].empty()) {
      onlineJoinRespInterval = make_shared<long>(boost::any_cast<long>(m["OnlineJoinRespInterval"]));
    }
    if (m.find("EvaluationStatus") != m.end() && !m["EvaluationStatus"].empty()) {
      evaluationStatus = make_shared<long>(boost::any_cast<long>(m["EvaluationStatus"]));
    }
    if (m.find("OutCallRouteNumber") != m.end() && !m["OutCallRouteNumber"].empty()) {
      outCallRouteNumber = make_shared<string>(boost::any_cast<string>(m["OutCallRouteNumber"]));
    }
    if (m.find("Dnis") != m.end() && !m["Dnis"].empty()) {
      dnis = make_shared<string>(boost::any_cast<string>(m["Dnis"]));
    }
    if (m.find("Ani") != m.end() && !m["Ani"].empty()) {
      ani = make_shared<string>(boost::any_cast<string>(m["Ani"]));
    }
  }


  virtual ~QueryTouchListResponseBodyResultDataDataExtAttrs() = default;
};
class QueryTouchListResponseBodyResultDataData : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<long> toId{};
  shared_ptr<long> parentTouchId{};
  shared_ptr<string> servicerName{};
  shared_ptr<long> channelType{};
  shared_ptr<long> closeTime{};
  shared_ptr<long> gmtModified{};
  shared_ptr<long> servicerId{};
  shared_ptr<string> switchUser{};
  shared_ptr<long> buId{};
  shared_ptr<long> fromId{};
  shared_ptr<long> userTouchId{};
  shared_ptr<string> touchTime{};
  shared_ptr<string> touchContent{};
  shared_ptr<string> feedback{};
  shared_ptr<string> touchId{};
  shared_ptr<long> queueId{};
  shared_ptr<long> depId{};
  shared_ptr<long> touchEndReason{};
  shared_ptr<string> memberName{};
  shared_ptr<string> commonQueueName{};
  shared_ptr<long> firstTime{};
  shared_ptr<long> touchType{};
  shared_ptr<string> channelId{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> memberId{};
  shared_ptr<QueryTouchListResponseBodyResultDataDataExtAttrs> extAttrs{};

  QueryTouchListResponseBodyResultDataData() {}

  explicit QueryTouchListResponseBodyResultDataData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (toId) {
      res["ToId"] = boost::any(*toId);
    }
    if (parentTouchId) {
      res["ParentTouchId"] = boost::any(*parentTouchId);
    }
    if (servicerName) {
      res["ServicerName"] = boost::any(*servicerName);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (closeTime) {
      res["CloseTime"] = boost::any(*closeTime);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (servicerId) {
      res["ServicerId"] = boost::any(*servicerId);
    }
    if (switchUser) {
      res["SwitchUser"] = boost::any(*switchUser);
    }
    if (buId) {
      res["BuId"] = boost::any(*buId);
    }
    if (fromId) {
      res["FromId"] = boost::any(*fromId);
    }
    if (userTouchId) {
      res["UserTouchId"] = boost::any(*userTouchId);
    }
    if (touchTime) {
      res["TouchTime"] = boost::any(*touchTime);
    }
    if (touchContent) {
      res["TouchContent"] = boost::any(*touchContent);
    }
    if (feedback) {
      res["Feedback"] = boost::any(*feedback);
    }
    if (touchId) {
      res["TouchId"] = boost::any(*touchId);
    }
    if (queueId) {
      res["QueueId"] = boost::any(*queueId);
    }
    if (depId) {
      res["DepId"] = boost::any(*depId);
    }
    if (touchEndReason) {
      res["TouchEndReason"] = boost::any(*touchEndReason);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (commonQueueName) {
      res["CommonQueueName"] = boost::any(*commonQueueName);
    }
    if (firstTime) {
      res["FirstTime"] = boost::any(*firstTime);
    }
    if (touchType) {
      res["TouchType"] = boost::any(*touchType);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (extAttrs) {
      res["ExtAttrs"] = extAttrs ? boost::any(extAttrs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ToId") != m.end() && !m["ToId"].empty()) {
      toId = make_shared<long>(boost::any_cast<long>(m["ToId"]));
    }
    if (m.find("ParentTouchId") != m.end() && !m["ParentTouchId"].empty()) {
      parentTouchId = make_shared<long>(boost::any_cast<long>(m["ParentTouchId"]));
    }
    if (m.find("ServicerName") != m.end() && !m["ServicerName"].empty()) {
      servicerName = make_shared<string>(boost::any_cast<string>(m["ServicerName"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<long>(boost::any_cast<long>(m["ChannelType"]));
    }
    if (m.find("CloseTime") != m.end() && !m["CloseTime"].empty()) {
      closeTime = make_shared<long>(boost::any_cast<long>(m["CloseTime"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("ServicerId") != m.end() && !m["ServicerId"].empty()) {
      servicerId = make_shared<long>(boost::any_cast<long>(m["ServicerId"]));
    }
    if (m.find("SwitchUser") != m.end() && !m["SwitchUser"].empty()) {
      switchUser = make_shared<string>(boost::any_cast<string>(m["SwitchUser"]));
    }
    if (m.find("BuId") != m.end() && !m["BuId"].empty()) {
      buId = make_shared<long>(boost::any_cast<long>(m["BuId"]));
    }
    if (m.find("FromId") != m.end() && !m["FromId"].empty()) {
      fromId = make_shared<long>(boost::any_cast<long>(m["FromId"]));
    }
    if (m.find("UserTouchId") != m.end() && !m["UserTouchId"].empty()) {
      userTouchId = make_shared<long>(boost::any_cast<long>(m["UserTouchId"]));
    }
    if (m.find("TouchTime") != m.end() && !m["TouchTime"].empty()) {
      touchTime = make_shared<string>(boost::any_cast<string>(m["TouchTime"]));
    }
    if (m.find("TouchContent") != m.end() && !m["TouchContent"].empty()) {
      touchContent = make_shared<string>(boost::any_cast<string>(m["TouchContent"]));
    }
    if (m.find("Feedback") != m.end() && !m["Feedback"].empty()) {
      feedback = make_shared<string>(boost::any_cast<string>(m["Feedback"]));
    }
    if (m.find("TouchId") != m.end() && !m["TouchId"].empty()) {
      touchId = make_shared<string>(boost::any_cast<string>(m["TouchId"]));
    }
    if (m.find("QueueId") != m.end() && !m["QueueId"].empty()) {
      queueId = make_shared<long>(boost::any_cast<long>(m["QueueId"]));
    }
    if (m.find("DepId") != m.end() && !m["DepId"].empty()) {
      depId = make_shared<long>(boost::any_cast<long>(m["DepId"]));
    }
    if (m.find("TouchEndReason") != m.end() && !m["TouchEndReason"].empty()) {
      touchEndReason = make_shared<long>(boost::any_cast<long>(m["TouchEndReason"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("CommonQueueName") != m.end() && !m["CommonQueueName"].empty()) {
      commonQueueName = make_shared<string>(boost::any_cast<string>(m["CommonQueueName"]));
    }
    if (m.find("FirstTime") != m.end() && !m["FirstTime"].empty()) {
      firstTime = make_shared<long>(boost::any_cast<long>(m["FirstTime"]));
    }
    if (m.find("TouchType") != m.end() && !m["TouchType"].empty()) {
      touchType = make_shared<long>(boost::any_cast<long>(m["TouchType"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
    if (m.find("ExtAttrs") != m.end() && !m["ExtAttrs"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExtAttrs"].type()) {
        QueryTouchListResponseBodyResultDataDataExtAttrs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExtAttrs"]));
        extAttrs = make_shared<QueryTouchListResponseBodyResultDataDataExtAttrs>(model1);
      }
    }
  }


  virtual ~QueryTouchListResponseBodyResultDataData() = default;
};
class QueryTouchListResponseBodyResultData : public Darabonba::Model {
public:
  shared_ptr<long> totalResults{};
  shared_ptr<long> nextPage{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<QueryTouchListResponseBodyResultDataData>> data{};
  shared_ptr<long> totalPage{};
  shared_ptr<long> previousPage{};
  shared_ptr<long> onePageSize{};
  shared_ptr<bool> empty{};

  QueryTouchListResponseBodyResultData() {}

  explicit QueryTouchListResponseBodyResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalResults) {
      res["TotalResults"] = boost::any(*totalResults);
    }
    if (nextPage) {
      res["NextPage"] = boost::any(*nextPage);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (previousPage) {
      res["PreviousPage"] = boost::any(*previousPage);
    }
    if (onePageSize) {
      res["OnePageSize"] = boost::any(*onePageSize);
    }
    if (empty) {
      res["Empty"] = boost::any(*empty);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalResults") != m.end() && !m["TotalResults"].empty()) {
      totalResults = make_shared<long>(boost::any_cast<long>(m["TotalResults"]));
    }
    if (m.find("NextPage") != m.end() && !m["NextPage"].empty()) {
      nextPage = make_shared<long>(boost::any_cast<long>(m["NextPage"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryTouchListResponseBodyResultDataData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTouchListResponseBodyResultDataData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryTouchListResponseBodyResultDataData>>(expect1);
      }
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("PreviousPage") != m.end() && !m["PreviousPage"].empty()) {
      previousPage = make_shared<long>(boost::any_cast<long>(m["PreviousPage"]));
    }
    if (m.find("OnePageSize") != m.end() && !m["OnePageSize"].empty()) {
      onePageSize = make_shared<long>(boost::any_cast<long>(m["OnePageSize"]));
    }
    if (m.find("Empty") != m.end() && !m["Empty"].empty()) {
      empty = make_shared<bool>(boost::any_cast<bool>(m["Empty"]));
    }
  }


  virtual ~QueryTouchListResponseBodyResultData() = default;
};
class QueryTouchListResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryTouchListResponseBodyResultData> resultData{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  QueryTouchListResponseBody() {}

  explicit QueryTouchListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultData) {
      res["ResultData"] = resultData ? boost::any(resultData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultData") != m.end() && !m["ResultData"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultData"].type()) {
        QueryTouchListResponseBodyResultData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultData"]));
        resultData = make_shared<QueryTouchListResponseBodyResultData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryTouchListResponseBody() = default;
};
class QueryTouchListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryTouchListResponseBody> body{};

  QueryTouchListResponse() {}

  explicit QueryTouchListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTouchListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTouchListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTouchListResponse() = default;
};
class QueryHotlineInQueueRequest : public Darabonba::Model {
public:
  shared_ptr<string> outerGroupId{};
  shared_ptr<string> outerGroupType{};

  QueryHotlineInQueueRequest() {}

  explicit QueryHotlineInQueueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outerGroupId) {
      res["OuterGroupId"] = boost::any(*outerGroupId);
    }
    if (outerGroupType) {
      res["OuterGroupType"] = boost::any(*outerGroupType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OuterGroupId") != m.end() && !m["OuterGroupId"].empty()) {
      outerGroupId = make_shared<string>(boost::any_cast<string>(m["OuterGroupId"]));
    }
    if (m.find("OuterGroupType") != m.end() && !m["OuterGroupType"].empty()) {
      outerGroupType = make_shared<string>(boost::any_cast<string>(m["OuterGroupType"]));
    }
  }


  virtual ~QueryHotlineInQueueRequest() = default;
};
class QueryHotlineInQueueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  QueryHotlineInQueueResponseBody() {}

  explicit QueryHotlineInQueueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryHotlineInQueueResponseBody() = default;
};
class QueryHotlineInQueueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryHotlineInQueueResponseBody> body{};

  QueryHotlineInQueueResponse() {}

  explicit QueryHotlineInQueueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryHotlineInQueueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryHotlineInQueueResponseBody>(model1);
      }
    }
  }


  virtual ~QueryHotlineInQueueResponse() = default;
};
class FinishHotlineServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  FinishHotlineServiceRequest() {}

  explicit FinishHotlineServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~FinishHotlineServiceRequest() = default;
};
class FinishHotlineServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  FinishHotlineServiceResponseBody() {}

  explicit FinishHotlineServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~FinishHotlineServiceResponseBody() = default;
};
class FinishHotlineServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FinishHotlineServiceResponseBody> body{};

  FinishHotlineServiceResponse() {}

  explicit FinishHotlineServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FinishHotlineServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FinishHotlineServiceResponseBody>(model1);
      }
    }
  }


  virtual ~FinishHotlineServiceResponse() = default;
};
class ListOutboundStrategiesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> buId{};
  shared_ptr<string> keyword{};

  ListOutboundStrategiesRequest() {}

  explicit ListOutboundStrategiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (buId) {
      res["BuId"] = boost::any(*buId);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("BuId") != m.end() && !m["BuId"].empty()) {
      buId = make_shared<long>(boost::any_cast<long>(m["BuId"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
  }


  virtual ~ListOutboundStrategiesRequest() = default;
};
class ListOutboundStrategiesResponseBodyOutboundStrategies : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<long> successRate{};
  shared_ptr<long> process{};
  shared_ptr<string> gmtModifiedStr{};
  shared_ptr<string> outboundNum{};
  shared_ptr<long> modifierId{};
  shared_ptr<string> outboundStrategyName{};
  shared_ptr<long> outboundStrategyId{};
  shared_ptr<string> sceneName{};
  shared_ptr<long> creatorId{};
  shared_ptr<string> robotName{};
  shared_ptr<string> modifierName{};
  shared_ptr<long> resourceAllocation{};
  shared_ptr<string> extAttr{};
  shared_ptr<long> numType{};
  shared_ptr<long> buId{};
  shared_ptr<string> robotId{};
  shared_ptr<string> creatorName{};
  shared_ptr<long> departmentId{};
  shared_ptr<long> robotType{};
  shared_ptr<long> ruleCode{};
  shared_ptr<string> gmtCreateStr{};

  ListOutboundStrategiesResponseBodyOutboundStrategies() {}

  explicit ListOutboundStrategiesResponseBodyOutboundStrategies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (successRate) {
      res["SuccessRate"] = boost::any(*successRate);
    }
    if (process) {
      res["Process"] = boost::any(*process);
    }
    if (gmtModifiedStr) {
      res["GmtModifiedStr"] = boost::any(*gmtModifiedStr);
    }
    if (outboundNum) {
      res["OutboundNum"] = boost::any(*outboundNum);
    }
    if (modifierId) {
      res["ModifierId"] = boost::any(*modifierId);
    }
    if (outboundStrategyName) {
      res["OutboundStrategyName"] = boost::any(*outboundStrategyName);
    }
    if (outboundStrategyId) {
      res["OutboundStrategyId"] = boost::any(*outboundStrategyId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (robotName) {
      res["RobotName"] = boost::any(*robotName);
    }
    if (modifierName) {
      res["ModifierName"] = boost::any(*modifierName);
    }
    if (resourceAllocation) {
      res["ResourceAllocation"] = boost::any(*resourceAllocation);
    }
    if (extAttr) {
      res["ExtAttr"] = boost::any(*extAttr);
    }
    if (numType) {
      res["NumType"] = boost::any(*numType);
    }
    if (buId) {
      res["BuId"] = boost::any(*buId);
    }
    if (robotId) {
      res["RobotId"] = boost::any(*robotId);
    }
    if (creatorName) {
      res["CreatorName"] = boost::any(*creatorName);
    }
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (robotType) {
      res["RobotType"] = boost::any(*robotType);
    }
    if (ruleCode) {
      res["RuleCode"] = boost::any(*ruleCode);
    }
    if (gmtCreateStr) {
      res["GmtCreateStr"] = boost::any(*gmtCreateStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SuccessRate") != m.end() && !m["SuccessRate"].empty()) {
      successRate = make_shared<long>(boost::any_cast<long>(m["SuccessRate"]));
    }
    if (m.find("Process") != m.end() && !m["Process"].empty()) {
      process = make_shared<long>(boost::any_cast<long>(m["Process"]));
    }
    if (m.find("GmtModifiedStr") != m.end() && !m["GmtModifiedStr"].empty()) {
      gmtModifiedStr = make_shared<string>(boost::any_cast<string>(m["GmtModifiedStr"]));
    }
    if (m.find("OutboundNum") != m.end() && !m["OutboundNum"].empty()) {
      outboundNum = make_shared<string>(boost::any_cast<string>(m["OutboundNum"]));
    }
    if (m.find("ModifierId") != m.end() && !m["ModifierId"].empty()) {
      modifierId = make_shared<long>(boost::any_cast<long>(m["ModifierId"]));
    }
    if (m.find("OutboundStrategyName") != m.end() && !m["OutboundStrategyName"].empty()) {
      outboundStrategyName = make_shared<string>(boost::any_cast<string>(m["OutboundStrategyName"]));
    }
    if (m.find("OutboundStrategyId") != m.end() && !m["OutboundStrategyId"].empty()) {
      outboundStrategyId = make_shared<long>(boost::any_cast<long>(m["OutboundStrategyId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<long>(boost::any_cast<long>(m["CreatorId"]));
    }
    if (m.find("RobotName") != m.end() && !m["RobotName"].empty()) {
      robotName = make_shared<string>(boost::any_cast<string>(m["RobotName"]));
    }
    if (m.find("ModifierName") != m.end() && !m["ModifierName"].empty()) {
      modifierName = make_shared<string>(boost::any_cast<string>(m["ModifierName"]));
    }
    if (m.find("ResourceAllocation") != m.end() && !m["ResourceAllocation"].empty()) {
      resourceAllocation = make_shared<long>(boost::any_cast<long>(m["ResourceAllocation"]));
    }
    if (m.find("ExtAttr") != m.end() && !m["ExtAttr"].empty()) {
      extAttr = make_shared<string>(boost::any_cast<string>(m["ExtAttr"]));
    }
    if (m.find("NumType") != m.end() && !m["NumType"].empty()) {
      numType = make_shared<long>(boost::any_cast<long>(m["NumType"]));
    }
    if (m.find("BuId") != m.end() && !m["BuId"].empty()) {
      buId = make_shared<long>(boost::any_cast<long>(m["BuId"]));
    }
    if (m.find("RobotId") != m.end() && !m["RobotId"].empty()) {
      robotId = make_shared<string>(boost::any_cast<string>(m["RobotId"]));
    }
    if (m.find("CreatorName") != m.end() && !m["CreatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["CreatorName"]));
    }
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<long>(boost::any_cast<long>(m["DepartmentId"]));
    }
    if (m.find("RobotType") != m.end() && !m["RobotType"].empty()) {
      robotType = make_shared<long>(boost::any_cast<long>(m["RobotType"]));
    }
    if (m.find("RuleCode") != m.end() && !m["RuleCode"].empty()) {
      ruleCode = make_shared<long>(boost::any_cast<long>(m["RuleCode"]));
    }
    if (m.find("GmtCreateStr") != m.end() && !m["GmtCreateStr"].empty()) {
      gmtCreateStr = make_shared<string>(boost::any_cast<string>(m["GmtCreateStr"]));
    }
  }


  virtual ~ListOutboundStrategiesResponseBodyOutboundStrategies() = default;
};
class ListOutboundStrategiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListOutboundStrategiesResponseBodyOutboundStrategies>> outboundStrategies{};
  shared_ptr<string> code{};

  ListOutboundStrategiesResponseBody() {}

  explicit ListOutboundStrategiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (outboundStrategies) {
      vector<boost::any> temp1;
      for(auto item1:*outboundStrategies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OutboundStrategies"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OutboundStrategies") != m.end() && !m["OutboundStrategies"].empty()) {
      if (typeid(vector<boost::any>) == m["OutboundStrategies"].type()) {
        vector<ListOutboundStrategiesResponseBodyOutboundStrategies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OutboundStrategies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOutboundStrategiesResponseBodyOutboundStrategies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outboundStrategies = make_shared<vector<ListOutboundStrategiesResponseBodyOutboundStrategies>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListOutboundStrategiesResponseBody() = default;
};
class ListOutboundStrategiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListOutboundStrategiesResponseBody> body{};

  ListOutboundStrategiesResponse() {}

  explicit ListOutboundStrategiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListOutboundStrategiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOutboundStrategiesResponseBody>(model1);
      }
    }
  }


  virtual ~ListOutboundStrategiesResponse() = default;
};
class ListHotlineRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> callId{};

  ListHotlineRecordRequest() {}

  explicit ListHotlineRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
  }


  virtual ~ListHotlineRecordRequest() = default;
};
class ListHotlineRecordResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};
  shared_ptr<string> connectionId{};
  shared_ptr<string> callId{};
  shared_ptr<string> url{};

  ListHotlineRecordResponseBodyData() {}

  explicit ListHotlineRecordResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ListHotlineRecordResponseBodyData() = default;
};
class ListHotlineRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListHotlineRecordResponseBodyData>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ListHotlineRecordResponseBody() {}

  explicit ListHotlineRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListHotlineRecordResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHotlineRecordResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListHotlineRecordResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListHotlineRecordResponseBody() = default;
};
class ListHotlineRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHotlineRecordResponseBody> body{};

  ListHotlineRecordResponse() {}

  explicit ListHotlineRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHotlineRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHotlineRecordResponseBody>(model1);
      }
    }
  }


  virtual ~ListHotlineRecordResponse() = default;
};
class ChangeQualityProjectStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> status{};
  shared_ptr<long> projectId{};

  ChangeQualityProjectStatusRequest() {}

  explicit ChangeQualityProjectStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~ChangeQualityProjectStatusRequest() = default;
};
class ChangeQualityProjectStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ChangeQualityProjectStatusResponseBody() {}

  explicit ChangeQualityProjectStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ChangeQualityProjectStatusResponseBody() = default;
};
class ChangeQualityProjectStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ChangeQualityProjectStatusResponseBody> body{};

  ChangeQualityProjectStatusResponse() {}

  explicit ChangeQualityProjectStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ChangeQualityProjectStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeQualityProjectStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeQualityProjectStatusResponse() = default;
};
class TransferCallToSkillGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<long> skillGroupId{};
  shared_ptr<string> callId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> connectionId{};
  shared_ptr<string> holdConnectionId{};
  shared_ptr<long> type{};
  shared_ptr<bool> isSingleTransfer{};

  TransferCallToSkillGroupRequest() {}

  explicit TransferCallToSkillGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
    }
    if (holdConnectionId) {
      res["HoldConnectionId"] = boost::any(*holdConnectionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (isSingleTransfer) {
      res["IsSingleTransfer"] = boost::any(*isSingleTransfer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<long>(boost::any_cast<long>(m["SkillGroupId"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
    if (m.find("HoldConnectionId") != m.end() && !m["HoldConnectionId"].empty()) {
      holdConnectionId = make_shared<string>(boost::any_cast<string>(m["HoldConnectionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("IsSingleTransfer") != m.end() && !m["IsSingleTransfer"].empty()) {
      isSingleTransfer = make_shared<bool>(boost::any_cast<bool>(m["IsSingleTransfer"]));
    }
  }


  virtual ~TransferCallToSkillGroupRequest() = default;
};
class TransferCallToSkillGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  TransferCallToSkillGroupResponseBody() {}

  explicit TransferCallToSkillGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~TransferCallToSkillGroupResponseBody() = default;
};
class TransferCallToSkillGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TransferCallToSkillGroupResponseBody> body{};

  TransferCallToSkillGroupResponse() {}

  explicit TransferCallToSkillGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TransferCallToSkillGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransferCallToSkillGroupResponseBody>(model1);
      }
    }
  }


  virtual ~TransferCallToSkillGroupResponse() = default;
};
class GetSkillGroupServiceCapabilityRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<long>> depIds{};
  shared_ptr<vector<long>> groupIds{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existSkillGroupGrouping{};

  GetSkillGroupServiceCapabilityRequest() {}

  explicit GetSkillGroupServiceCapabilityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existSkillGroupGrouping) {
      res["ExistSkillGroupGrouping"] = boost::any(*existSkillGroupGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DepIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      depIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      groupIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistSkillGroupGrouping") != m.end() && !m["ExistSkillGroupGrouping"].empty()) {
      existSkillGroupGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistSkillGroupGrouping"]));
    }
  }


  virtual ~GetSkillGroupServiceCapabilityRequest() = default;
};
class GetSkillGroupServiceCapabilityShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> depIdsShrink{};
  shared_ptr<string> groupIdsShrink{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existSkillGroupGrouping{};

  GetSkillGroupServiceCapabilityShrinkRequest() {}

  explicit GetSkillGroupServiceCapabilityShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (depIdsShrink) {
      res["DepIds"] = boost::any(*depIdsShrink);
    }
    if (groupIdsShrink) {
      res["GroupIds"] = boost::any(*groupIdsShrink);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existSkillGroupGrouping) {
      res["ExistSkillGroupGrouping"] = boost::any(*existSkillGroupGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      depIdsShrink = make_shared<string>(boost::any_cast<string>(m["DepIds"]));
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      groupIdsShrink = make_shared<string>(boost::any_cast<string>(m["GroupIds"]));
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistSkillGroupGrouping") != m.end() && !m["ExistSkillGroupGrouping"].empty()) {
      existSkillGroupGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistSkillGroupGrouping"]));
    }
  }


  virtual ~GetSkillGroupServiceCapabilityShrinkRequest() = default;
};
class GetSkillGroupServiceCapabilityResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<string> rows{};

  GetSkillGroupServiceCapabilityResponseBodyData() {}

  explicit GetSkillGroupServiceCapabilityResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<string>(boost::any_cast<string>(m["Rows"]));
    }
  }


  virtual ~GetSkillGroupServiceCapabilityResponseBodyData() = default;
};
class GetSkillGroupServiceCapabilityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};
  shared_ptr<GetSkillGroupServiceCapabilityResponseBodyData> data{};

  GetSkillGroupServiceCapabilityResponseBody() {}

  explicit GetSkillGroupServiceCapabilityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSkillGroupServiceCapabilityResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSkillGroupServiceCapabilityResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetSkillGroupServiceCapabilityResponseBody() = default;
};
class GetSkillGroupServiceCapabilityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSkillGroupServiceCapabilityResponseBody> body{};

  GetSkillGroupServiceCapabilityResponse() {}

  explicit GetSkillGroupServiceCapabilityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSkillGroupServiceCapabilityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSkillGroupServiceCapabilityResponseBody>(model1);
      }
    }
  }


  virtual ~GetSkillGroupServiceCapabilityResponse() = default;
};
class RemoveSkillGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> skillGroupId{};
  shared_ptr<string> clientToken{};

  RemoveSkillGroupRequest() {}

  explicit RemoveSkillGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<string>(boost::any_cast<string>(m["SkillGroupId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~RemoveSkillGroupRequest() = default;
};
class RemoveSkillGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  RemoveSkillGroupResponseBody() {}

  explicit RemoveSkillGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RemoveSkillGroupResponseBody() = default;
};
class RemoveSkillGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveSkillGroupResponseBody> body{};

  RemoveSkillGroupResponse() {}

  explicit RemoveSkillGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveSkillGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveSkillGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveSkillGroupResponse() = default;
};
class StartCallV2Request : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> caller{};
  shared_ptr<long> callerType{};
  shared_ptr<string> callee{};

  StartCallV2Request() {}

  explicit StartCallV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (callerType) {
      res["CallerType"] = boost::any(*callerType);
    }
    if (callee) {
      res["Callee"] = boost::any(*callee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("CallerType") != m.end() && !m["CallerType"].empty()) {
      callerType = make_shared<long>(boost::any_cast<long>(m["CallerType"]));
    }
    if (m.find("Callee") != m.end() && !m["Callee"].empty()) {
      callee = make_shared<string>(boost::any_cast<string>(m["Callee"]));
    }
  }


  virtual ~StartCallV2Request() = default;
};
class StartCallV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  StartCallV2ResponseBody() {}

  explicit StartCallV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StartCallV2ResponseBody() = default;
};
class StartCallV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartCallV2ResponseBody> body{};

  StartCallV2Response() {}

  explicit StartCallV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartCallV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartCallV2ResponseBody>(model1);
      }
    }
  }


  virtual ~StartCallV2Response() = default;
};
class ChangeChatAgentStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> method{};

  ChangeChatAgentStatusRequest() {}

  explicit ChangeChatAgentStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
  }


  virtual ~ChangeChatAgentStatusRequest() = default;
};
class ChangeChatAgentStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ChangeChatAgentStatusResponseBody() {}

  explicit ChangeChatAgentStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ChangeChatAgentStatusResponseBody() = default;
};
class ChangeChatAgentStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ChangeChatAgentStatusResponseBody> body{};

  ChangeChatAgentStatusResponse() {}

  explicit ChangeChatAgentStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ChangeChatAgentStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeChatAgentStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeChatAgentStatusResponse() = default;
};
class DescribeRecordDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> accountType{};
  shared_ptr<string> accountId{};
  shared_ptr<string> acid{};
  shared_ptr<long> secLevel{};

  DescribeRecordDataRequest() {}

  explicit DescribeRecordDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (acid) {
      res["Acid"] = boost::any(*acid);
    }
    if (secLevel) {
      res["SecLevel"] = boost::any(*secLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("Acid") != m.end() && !m["Acid"].empty()) {
      acid = make_shared<string>(boost::any_cast<string>(m["Acid"]));
    }
    if (m.find("SecLevel") != m.end() && !m["SecLevel"].empty()) {
      secLevel = make_shared<long>(boost::any_cast<long>(m["SecLevel"]));
    }
  }


  virtual ~DescribeRecordDataRequest() = default;
};
class DescribeRecordDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> acid{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> ossLink{};
  shared_ptr<string> agentId{};
  shared_ptr<string> code{};

  DescribeRecordDataResponseBody() {}

  explicit DescribeRecordDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acid) {
      res["Acid"] = boost::any(*acid);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (ossLink) {
      res["OssLink"] = boost::any(*ossLink);
    }
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Acid") != m.end() && !m["Acid"].empty()) {
      acid = make_shared<string>(boost::any_cast<string>(m["Acid"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OssLink") != m.end() && !m["OssLink"].empty()) {
      ossLink = make_shared<string>(boost::any_cast<string>(m["OssLink"]));
    }
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["AgentId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DescribeRecordDataResponseBody() = default;
};
class DescribeRecordDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRecordDataResponseBody> body{};

  DescribeRecordDataResponse() {}

  explicit DescribeRecordDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRecordDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRecordDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRecordDataResponse() = default;
};
class DeleteOuterAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> outerAccountId{};
  shared_ptr<string> outerAccountType{};

  DeleteOuterAccountRequest() {}

  explicit DeleteOuterAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outerAccountId) {
      res["OuterAccountId"] = boost::any(*outerAccountId);
    }
    if (outerAccountType) {
      res["OuterAccountType"] = boost::any(*outerAccountType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OuterAccountId") != m.end() && !m["OuterAccountId"].empty()) {
      outerAccountId = make_shared<string>(boost::any_cast<string>(m["OuterAccountId"]));
    }
    if (m.find("OuterAccountType") != m.end() && !m["OuterAccountType"].empty()) {
      outerAccountType = make_shared<string>(boost::any_cast<string>(m["OuterAccountType"]));
    }
  }


  virtual ~DeleteOuterAccountRequest() = default;
};
class DeleteOuterAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DeleteOuterAccountResponseBody() {}

  explicit DeleteOuterAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteOuterAccountResponseBody() = default;
};
class DeleteOuterAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteOuterAccountResponseBody> body{};

  DeleteOuterAccountResponse() {}

  explicit DeleteOuterAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteOuterAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteOuterAccountResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteOuterAccountResponse() = default;
};
class GetDepartmentalLatitudeAgentStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<long>> depIds{};
  shared_ptr<bool> existDepartmentGrouping{};

  GetDepartmentalLatitudeAgentStatusRequest() {}

  explicit GetDepartmentalLatitudeAgentStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DepIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      depIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
  }


  virtual ~GetDepartmentalLatitudeAgentStatusRequest() = default;
};
class GetDepartmentalLatitudeAgentStatusShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> depIdsShrink{};
  shared_ptr<bool> existDepartmentGrouping{};

  GetDepartmentalLatitudeAgentStatusShrinkRequest() {}

  explicit GetDepartmentalLatitudeAgentStatusShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (depIdsShrink) {
      res["DepIds"] = boost::any(*depIdsShrink);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      depIdsShrink = make_shared<string>(boost::any_cast<string>(m["DepIds"]));
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
  }


  virtual ~GetDepartmentalLatitudeAgentStatusShrinkRequest() = default;
};
class GetDepartmentalLatitudeAgentStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<string> rows{};

  GetDepartmentalLatitudeAgentStatusResponseBodyData() {}

  explicit GetDepartmentalLatitudeAgentStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<string>(boost::any_cast<string>(m["Rows"]));
    }
  }


  virtual ~GetDepartmentalLatitudeAgentStatusResponseBodyData() = default;
};
class GetDepartmentalLatitudeAgentStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetDepartmentalLatitudeAgentStatusResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetDepartmentalLatitudeAgentStatusResponseBody() {}

  explicit GetDepartmentalLatitudeAgentStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetDepartmentalLatitudeAgentStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDepartmentalLatitudeAgentStatusResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetDepartmentalLatitudeAgentStatusResponseBody() = default;
};
class GetDepartmentalLatitudeAgentStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDepartmentalLatitudeAgentStatusResponseBody> body{};

  GetDepartmentalLatitudeAgentStatusResponse() {}

  explicit GetDepartmentalLatitudeAgentStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDepartmentalLatitudeAgentStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDepartmentalLatitudeAgentStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetDepartmentalLatitudeAgentStatusResponse() = default;
};
class GetHotlineAgentDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  GetHotlineAgentDetailRequest() {}

  explicit GetHotlineAgentDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~GetHotlineAgentDetailRequest() = default;
};
class GetHotlineAgentDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> agentStatusCode{};
  shared_ptr<string> token{};
  shared_ptr<long> agentId{};
  shared_ptr<bool> assigned{};
  shared_ptr<long> restType{};
  shared_ptr<long> agentStatus{};
  shared_ptr<long> tenantId{};

  GetHotlineAgentDetailResponseBodyData() {}

  explicit GetHotlineAgentDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentStatusCode) {
      res["AgentStatusCode"] = boost::any(*agentStatusCode);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (assigned) {
      res["Assigned"] = boost::any(*assigned);
    }
    if (restType) {
      res["RestType"] = boost::any(*restType);
    }
    if (agentStatus) {
      res["AgentStatus"] = boost::any(*agentStatus);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentStatusCode") != m.end() && !m["AgentStatusCode"].empty()) {
      agentStatusCode = make_shared<string>(boost::any_cast<string>(m["AgentStatusCode"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<long>(boost::any_cast<long>(m["AgentId"]));
    }
    if (m.find("Assigned") != m.end() && !m["Assigned"].empty()) {
      assigned = make_shared<bool>(boost::any_cast<bool>(m["Assigned"]));
    }
    if (m.find("RestType") != m.end() && !m["RestType"].empty()) {
      restType = make_shared<long>(boost::any_cast<long>(m["RestType"]));
    }
    if (m.find("AgentStatus") != m.end() && !m["AgentStatus"].empty()) {
      agentStatus = make_shared<long>(boost::any_cast<long>(m["AgentStatus"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~GetHotlineAgentDetailResponseBodyData() = default;
};
class GetHotlineAgentDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetHotlineAgentDetailResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  GetHotlineAgentDetailResponseBody() {}

  explicit GetHotlineAgentDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetHotlineAgentDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetHotlineAgentDetailResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~GetHotlineAgentDetailResponseBody() = default;
};
class GetHotlineAgentDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHotlineAgentDetailResponseBody> body{};

  GetHotlineAgentDetailResponse() {}

  explicit GetHotlineAgentDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHotlineAgentDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotlineAgentDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotlineAgentDetailResponse() = default;
};
class MakeCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> outerAccountId{};
  shared_ptr<string> outerAccountType{};
  shared_ptr<string> commandCode{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> extInfo{};

  MakeCallRequest() {}

  explicit MakeCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outerAccountId) {
      res["OuterAccountId"] = boost::any(*outerAccountId);
    }
    if (outerAccountType) {
      res["OuterAccountType"] = boost::any(*outerAccountType);
    }
    if (commandCode) {
      res["CommandCode"] = boost::any(*commandCode);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OuterAccountId") != m.end() && !m["OuterAccountId"].empty()) {
      outerAccountId = make_shared<string>(boost::any_cast<string>(m["OuterAccountId"]));
    }
    if (m.find("OuterAccountType") != m.end() && !m["OuterAccountType"].empty()) {
      outerAccountType = make_shared<string>(boost::any_cast<string>(m["OuterAccountType"]));
    }
    if (m.find("CommandCode") != m.end() && !m["CommandCode"].empty()) {
      commandCode = make_shared<string>(boost::any_cast<string>(m["CommandCode"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
  }


  virtual ~MakeCallRequest() = default;
};
class MakeCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  MakeCallResponseBody() {}

  explicit MakeCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~MakeCallResponseBody() = default;
};
class MakeCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<MakeCallResponseBody> body{};

  MakeCallResponse() {}

  explicit MakeCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MakeCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MakeCallResponseBody>(model1);
      }
    }
  }


  virtual ~MakeCallResponse() = default;
};
class FetchCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> callId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> connectionId{};
  shared_ptr<string> holdConnectionId{};

  FetchCallRequest() {}

  explicit FetchCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
    }
    if (holdConnectionId) {
      res["HoldConnectionId"] = boost::any(*holdConnectionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
    if (m.find("HoldConnectionId") != m.end() && !m["HoldConnectionId"].empty()) {
      holdConnectionId = make_shared<string>(boost::any_cast<string>(m["HoldConnectionId"]));
    }
  }


  virtual ~FetchCallRequest() = default;
};
class FetchCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  FetchCallResponseBody() {}

  explicit FetchCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~FetchCallResponseBody() = default;
};
class FetchCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FetchCallResponseBody> body{};

  FetchCallResponse() {}

  explicit FetchCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FetchCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FetchCallResponseBody>(model1);
      }
    }
  }


  virtual ~FetchCallResponse() = default;
};
class GetHotlineAgentStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  GetHotlineAgentStatusRequest() {}

  explicit GetHotlineAgentStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~GetHotlineAgentStatusRequest() = default;
};
class GetHotlineAgentStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  GetHotlineAgentStatusResponseBody() {}

  explicit GetHotlineAgentStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~GetHotlineAgentStatusResponseBody() = default;
};
class GetHotlineAgentStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHotlineAgentStatusResponseBody> body{};

  GetHotlineAgentStatusResponse() {}

  explicit GetHotlineAgentStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHotlineAgentStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotlineAgentStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotlineAgentStatusResponse() = default;
};
class StartCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> caller{};
  shared_ptr<string> callee{};

  StartCallRequest() {}

  explicit StartCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (callee) {
      res["Callee"] = boost::any(*callee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("Callee") != m.end() && !m["Callee"].empty()) {
      callee = make_shared<string>(boost::any_cast<string>(m["Callee"]));
    }
  }


  virtual ~StartCallRequest() = default;
};
class StartCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  StartCallResponseBody() {}

  explicit StartCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StartCallResponseBody() = default;
};
class StartCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartCallResponseBody> body{};

  StartCallResponse() {}

  explicit StartCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartCallResponseBody>(model1);
      }
    }
  }


  virtual ~StartCallResponse() = default;
};
class GetQualityRuleTagListRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetQualityRuleTagListRequest() {}

  explicit GetQualityRuleTagListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetQualityRuleTagListRequest() = default;
};
class GetQualityRuleTagListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> ruleTagId{};
  shared_ptr<string> ruleTagName{};

  GetQualityRuleTagListResponseBodyData() {}

  explicit GetQualityRuleTagListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleTagId) {
      res["RuleTagId"] = boost::any(*ruleTagId);
    }
    if (ruleTagName) {
      res["RuleTagName"] = boost::any(*ruleTagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleTagId") != m.end() && !m["RuleTagId"].empty()) {
      ruleTagId = make_shared<long>(boost::any_cast<long>(m["RuleTagId"]));
    }
    if (m.find("RuleTagName") != m.end() && !m["RuleTagName"].empty()) {
      ruleTagName = make_shared<string>(boost::any_cast<string>(m["RuleTagName"]));
    }
  }


  virtual ~GetQualityRuleTagListResponseBodyData() = default;
};
class GetQualityRuleTagListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetQualityRuleTagListResponseBodyData>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetQualityRuleTagListResponseBody() {}

  explicit GetQualityRuleTagListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetQualityRuleTagListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQualityRuleTagListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetQualityRuleTagListResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetQualityRuleTagListResponseBody() = default;
};
class GetQualityRuleTagListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetQualityRuleTagListResponseBody> body{};

  GetQualityRuleTagListResponse() {}

  explicit GetQualityRuleTagListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetQualityRuleTagListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQualityRuleTagListResponseBody>(model1);
      }
    }
  }


  virtual ~GetQualityRuleTagListResponse() = default;
};
class GetOutbounNumListRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  GetOutbounNumListRequest() {}

  explicit GetOutbounNumListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~GetOutbounNumListRequest() = default;
};
class GetOutbounNumListResponseBodyDataNumGroup : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> value{};
  shared_ptr<string> description{};

  GetOutbounNumListResponseBodyDataNumGroup() {}

  explicit GetOutbounNumListResponseBodyDataNumGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~GetOutbounNumListResponseBodyDataNumGroup() = default;
};
class GetOutbounNumListResponseBodyDataNum : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> value{};
  shared_ptr<string> description{};

  GetOutbounNumListResponseBodyDataNum() {}

  explicit GetOutbounNumListResponseBodyDataNum(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~GetOutbounNumListResponseBodyDataNum() = default;
};
class GetOutbounNumListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetOutbounNumListResponseBodyDataNumGroup>> numGroup{};
  shared_ptr<vector<GetOutbounNumListResponseBodyDataNum>> num{};

  GetOutbounNumListResponseBodyData() {}

  explicit GetOutbounNumListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (numGroup) {
      vector<boost::any> temp1;
      for(auto item1:*numGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NumGroup"] = boost::any(temp1);
    }
    if (num) {
      vector<boost::any> temp1;
      for(auto item1:*num){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Num"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NumGroup") != m.end() && !m["NumGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["NumGroup"].type()) {
        vector<GetOutbounNumListResponseBodyDataNumGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NumGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOutbounNumListResponseBodyDataNumGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        numGroup = make_shared<vector<GetOutbounNumListResponseBodyDataNumGroup>>(expect1);
      }
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      if (typeid(vector<boost::any>) == m["Num"].type()) {
        vector<GetOutbounNumListResponseBodyDataNum> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Num"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOutbounNumListResponseBodyDataNum model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        num = make_shared<vector<GetOutbounNumListResponseBodyDataNum>>(expect1);
      }
    }
  }


  virtual ~GetOutbounNumListResponseBodyData() = default;
};
class GetOutbounNumListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetOutbounNumListResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  GetOutbounNumListResponseBody() {}

  explicit GetOutbounNumListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetOutbounNumListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetOutbounNumListResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~GetOutbounNumListResponseBody() = default;
};
class GetOutbounNumListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOutbounNumListResponseBody> body{};

  GetOutbounNumListResponse() {}

  explicit GetOutbounNumListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetOutbounNumListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOutbounNumListResponseBody>(model1);
      }
    }
  }


  virtual ~GetOutbounNumListResponse() = default;
};
class CreateThirdSsoAgentRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> clientId{};
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> displayName{};
  shared_ptr<vector<long>> skillGroupIds{};
  shared_ptr<vector<long>> roleIds{};

  CreateThirdSsoAgentRequest() {}

  explicit CreateThirdSsoAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (skillGroupIds) {
      res["SkillGroupIds"] = boost::any(*skillGroupIds);
    }
    if (roleIds) {
      res["RoleIds"] = boost::any(*roleIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("SkillGroupIds") != m.end() && !m["SkillGroupIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SkillGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SkillGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      skillGroupIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RoleIds") != m.end() && !m["RoleIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RoleIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RoleIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      roleIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~CreateThirdSsoAgentRequest() = default;
};
class CreateThirdSsoAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<long> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  CreateThirdSsoAgentResponseBody() {}

  explicit CreateThirdSsoAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateThirdSsoAgentResponseBody() = default;
};
class CreateThirdSsoAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateThirdSsoAgentResponseBody> body{};

  CreateThirdSsoAgentResponse() {}

  explicit CreateThirdSsoAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateThirdSsoAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateThirdSsoAgentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateThirdSsoAgentResponse() = default;
};
class GetSkillGroupStatusTotalRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<long>> agentIds{};
  shared_ptr<vector<long>> depIds{};
  shared_ptr<vector<long>> groupIds{};
  shared_ptr<string> timeLatitudeType{};
  shared_ptr<bool> existAgentGrouping{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existSkillGroupGrouping{};

  GetSkillGroupStatusTotalRequest() {}

  explicit GetSkillGroupStatusTotalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (agentIds) {
      res["AgentIds"] = boost::any(*agentIds);
    }
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    if (timeLatitudeType) {
      res["TimeLatitudeType"] = boost::any(*timeLatitudeType);
    }
    if (existAgentGrouping) {
      res["ExistAgentGrouping"] = boost::any(*existAgentGrouping);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existSkillGroupGrouping) {
      res["ExistSkillGroupGrouping"] = boost::any(*existSkillGroupGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("AgentIds") != m.end() && !m["AgentIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AgentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AgentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      agentIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DepIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      depIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      groupIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("TimeLatitudeType") != m.end() && !m["TimeLatitudeType"].empty()) {
      timeLatitudeType = make_shared<string>(boost::any_cast<string>(m["TimeLatitudeType"]));
    }
    if (m.find("ExistAgentGrouping") != m.end() && !m["ExistAgentGrouping"].empty()) {
      existAgentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistAgentGrouping"]));
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistSkillGroupGrouping") != m.end() && !m["ExistSkillGroupGrouping"].empty()) {
      existSkillGroupGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistSkillGroupGrouping"]));
    }
  }


  virtual ~GetSkillGroupStatusTotalRequest() = default;
};
class GetSkillGroupStatusTotalShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> agentIdsShrink{};
  shared_ptr<string> depIdsShrink{};
  shared_ptr<string> groupIdsShrink{};
  shared_ptr<string> timeLatitudeType{};
  shared_ptr<bool> existAgentGrouping{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existSkillGroupGrouping{};

  GetSkillGroupStatusTotalShrinkRequest() {}

  explicit GetSkillGroupStatusTotalShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (agentIdsShrink) {
      res["AgentIds"] = boost::any(*agentIdsShrink);
    }
    if (depIdsShrink) {
      res["DepIds"] = boost::any(*depIdsShrink);
    }
    if (groupIdsShrink) {
      res["GroupIds"] = boost::any(*groupIdsShrink);
    }
    if (timeLatitudeType) {
      res["TimeLatitudeType"] = boost::any(*timeLatitudeType);
    }
    if (existAgentGrouping) {
      res["ExistAgentGrouping"] = boost::any(*existAgentGrouping);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existSkillGroupGrouping) {
      res["ExistSkillGroupGrouping"] = boost::any(*existSkillGroupGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("AgentIds") != m.end() && !m["AgentIds"].empty()) {
      agentIdsShrink = make_shared<string>(boost::any_cast<string>(m["AgentIds"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      depIdsShrink = make_shared<string>(boost::any_cast<string>(m["DepIds"]));
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      groupIdsShrink = make_shared<string>(boost::any_cast<string>(m["GroupIds"]));
    }
    if (m.find("TimeLatitudeType") != m.end() && !m["TimeLatitudeType"].empty()) {
      timeLatitudeType = make_shared<string>(boost::any_cast<string>(m["TimeLatitudeType"]));
    }
    if (m.find("ExistAgentGrouping") != m.end() && !m["ExistAgentGrouping"].empty()) {
      existAgentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistAgentGrouping"]));
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistSkillGroupGrouping") != m.end() && !m["ExistSkillGroupGrouping"].empty()) {
      existSkillGroupGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistSkillGroupGrouping"]));
    }
  }


  virtual ~GetSkillGroupStatusTotalShrinkRequest() = default;
};
class GetSkillGroupStatusTotalResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<string> rows{};

  GetSkillGroupStatusTotalResponseBodyData() {}

  explicit GetSkillGroupStatusTotalResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<string>(boost::any_cast<string>(m["Rows"]));
    }
  }


  virtual ~GetSkillGroupStatusTotalResponseBodyData() = default;
};
class GetSkillGroupStatusTotalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};
  shared_ptr<GetSkillGroupStatusTotalResponseBodyData> data{};

  GetSkillGroupStatusTotalResponseBody() {}

  explicit GetSkillGroupStatusTotalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSkillGroupStatusTotalResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSkillGroupStatusTotalResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetSkillGroupStatusTotalResponseBody() = default;
};
class GetSkillGroupStatusTotalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSkillGroupStatusTotalResponseBody> body{};

  GetSkillGroupStatusTotalResponse() {}

  explicit GetSkillGroupStatusTotalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSkillGroupStatusTotalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSkillGroupStatusTotalResponseBody>(model1);
      }
    }
  }


  virtual ~GetSkillGroupStatusTotalResponse() = default;
};
class BatchCreateQualityProjectsRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<long> checkFreqType{};
  shared_ptr<string> timeRangeStart{};
  shared_ptr<string> timeRangeEnd{};
  shared_ptr<vector<int>> analysisIds{};
  shared_ptr<vector<string>> instanceList{};
  shared_ptr<vector<int>> channelTouchType{};

  BatchCreateQualityProjectsRequest() {}

  explicit BatchCreateQualityProjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (checkFreqType) {
      res["CheckFreqType"] = boost::any(*checkFreqType);
    }
    if (timeRangeStart) {
      res["TimeRangeStart"] = boost::any(*timeRangeStart);
    }
    if (timeRangeEnd) {
      res["TimeRangeEnd"] = boost::any(*timeRangeEnd);
    }
    if (analysisIds) {
      res["AnalysisIds"] = boost::any(*analysisIds);
    }
    if (instanceList) {
      res["InstanceList"] = boost::any(*instanceList);
    }
    if (channelTouchType) {
      res["ChannelTouchType"] = boost::any(*channelTouchType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("CheckFreqType") != m.end() && !m["CheckFreqType"].empty()) {
      checkFreqType = make_shared<long>(boost::any_cast<long>(m["CheckFreqType"]));
    }
    if (m.find("TimeRangeStart") != m.end() && !m["TimeRangeStart"].empty()) {
      timeRangeStart = make_shared<string>(boost::any_cast<string>(m["TimeRangeStart"]));
    }
    if (m.find("TimeRangeEnd") != m.end() && !m["TimeRangeEnd"].empty()) {
      timeRangeEnd = make_shared<string>(boost::any_cast<string>(m["TimeRangeEnd"]));
    }
    if (m.find("AnalysisIds") != m.end() && !m["AnalysisIds"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["AnalysisIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AnalysisIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      analysisIds = make_shared<vector<int>>(toVec1);
    }
    if (m.find("InstanceList") != m.end() && !m["InstanceList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ChannelTouchType") != m.end() && !m["ChannelTouchType"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["ChannelTouchType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChannelTouchType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      channelTouchType = make_shared<vector<int>>(toVec1);
    }
  }


  virtual ~BatchCreateQualityProjectsRequest() = default;
};
class BatchCreateQualityProjectsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> version{};
  shared_ptr<long> projectId{};
  shared_ptr<string> instanceId{};

  BatchCreateQualityProjectsResponseBodyData() {}

  explicit BatchCreateQualityProjectsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~BatchCreateQualityProjectsResponseBodyData() = default;
};
class BatchCreateQualityProjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchCreateQualityProjectsResponseBodyData>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  BatchCreateQualityProjectsResponseBody() {}

  explicit BatchCreateQualityProjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<BatchCreateQualityProjectsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchCreateQualityProjectsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<BatchCreateQualityProjectsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BatchCreateQualityProjectsResponseBody() = default;
};
class BatchCreateQualityProjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchCreateQualityProjectsResponseBody> body{};

  BatchCreateQualityProjectsResponse() {}

  explicit BatchCreateQualityProjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BatchCreateQualityProjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchCreateQualityProjectsResponseBody>(model1);
      }
    }
  }


  virtual ~BatchCreateQualityProjectsResponse() = default;
};
class InsertTaskDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> outboundTaskId{};
  shared_ptr<string> callInfos{};
  shared_ptr<string> instanceId{};

  InsertTaskDetailRequest() {}

  explicit InsertTaskDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outboundTaskId) {
      res["OutboundTaskId"] = boost::any(*outboundTaskId);
    }
    if (callInfos) {
      res["CallInfos"] = boost::any(*callInfos);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutboundTaskId") != m.end() && !m["OutboundTaskId"].empty()) {
      outboundTaskId = make_shared<long>(boost::any_cast<long>(m["OutboundTaskId"]));
    }
    if (m.find("CallInfos") != m.end() && !m["CallInfos"].empty()) {
      callInfos = make_shared<string>(boost::any_cast<string>(m["CallInfos"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~InsertTaskDetailRequest() = default;
};
class InsertTaskDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  InsertTaskDetailResponseBody() {}

  explicit InsertTaskDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~InsertTaskDetailResponseBody() = default;
};
class InsertTaskDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<InsertTaskDetailResponseBody> body{};

  InsertTaskDetailResponse() {}

  explicit InsertTaskDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        InsertTaskDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InsertTaskDetailResponseBody>(model1);
      }
    }
  }


  virtual ~InsertTaskDetailResponse() = default;
};
class UpdateSkillGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> skillGroupId{};
  shared_ptr<string> skillGroupName{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> clientToken{};

  UpdateSkillGroupRequest() {}

  explicit UpdateSkillGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (skillGroupName) {
      res["SkillGroupName"] = boost::any(*skillGroupName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<long>(boost::any_cast<long>(m["SkillGroupId"]));
    }
    if (m.find("SkillGroupName") != m.end() && !m["SkillGroupName"].empty()) {
      skillGroupName = make_shared<string>(boost::any_cast<string>(m["SkillGroupName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~UpdateSkillGroupRequest() = default;
};
class UpdateSkillGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  UpdateSkillGroupResponseBody() {}

  explicit UpdateSkillGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateSkillGroupResponseBody() = default;
};
class UpdateSkillGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateSkillGroupResponseBody> body{};

  UpdateSkillGroupResponse() {}

  explicit UpdateSkillGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateSkillGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSkillGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSkillGroupResponse() = default;
};
class HotlineSessionQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> acid{};
  shared_ptr<long> callType{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> callingNumber{};
  shared_ptr<long> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> memberId{};
  shared_ptr<string> memberName{};
  shared_ptr<long> queryEndTime{};
  shared_ptr<long> queryStartTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> servicerName{};
  shared_ptr<string> servicerId{};
  shared_ptr<string> params{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNo{};
  shared_ptr<string> callResult{};
  shared_ptr<string> id{};
  shared_ptr<vector<string>> acidList{};
  shared_ptr<vector<int>> callTypeList{};
  shared_ptr<vector<int>> groupIdList{};
  shared_ptr<vector<string>> callingNumberList{};
  shared_ptr<vector<string>> calledNumberList{};
  shared_ptr<vector<string>> memberIdList{};
  shared_ptr<vector<string>> servicerIdList{};
  shared_ptr<vector<string>> callResultList{};

  HotlineSessionQueryRequest() {}

  explicit HotlineSessionQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (acid) {
      res["Acid"] = boost::any(*acid);
    }
    if (callType) {
      res["CallType"] = boost::any(*callType);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (queryEndTime) {
      res["QueryEndTime"] = boost::any(*queryEndTime);
    }
    if (queryStartTime) {
      res["QueryStartTime"] = boost::any(*queryStartTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (servicerName) {
      res["ServicerName"] = boost::any(*servicerName);
    }
    if (servicerId) {
      res["ServicerId"] = boost::any(*servicerId);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (callResult) {
      res["CallResult"] = boost::any(*callResult);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (acidList) {
      res["AcidList"] = boost::any(*acidList);
    }
    if (callTypeList) {
      res["CallTypeList"] = boost::any(*callTypeList);
    }
    if (groupIdList) {
      res["GroupIdList"] = boost::any(*groupIdList);
    }
    if (callingNumberList) {
      res["CallingNumberList"] = boost::any(*callingNumberList);
    }
    if (calledNumberList) {
      res["CalledNumberList"] = boost::any(*calledNumberList);
    }
    if (memberIdList) {
      res["MemberIdList"] = boost::any(*memberIdList);
    }
    if (servicerIdList) {
      res["ServicerIdList"] = boost::any(*servicerIdList);
    }
    if (callResultList) {
      res["CallResultList"] = boost::any(*callResultList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Acid") != m.end() && !m["Acid"].empty()) {
      acid = make_shared<string>(boost::any_cast<string>(m["Acid"]));
    }
    if (m.find("CallType") != m.end() && !m["CallType"].empty()) {
      callType = make_shared<long>(boost::any_cast<long>(m["CallType"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("QueryEndTime") != m.end() && !m["QueryEndTime"].empty()) {
      queryEndTime = make_shared<long>(boost::any_cast<long>(m["QueryEndTime"]));
    }
    if (m.find("QueryStartTime") != m.end() && !m["QueryStartTime"].empty()) {
      queryStartTime = make_shared<long>(boost::any_cast<long>(m["QueryStartTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServicerName") != m.end() && !m["ServicerName"].empty()) {
      servicerName = make_shared<string>(boost::any_cast<string>(m["ServicerName"]));
    }
    if (m.find("ServicerId") != m.end() && !m["ServicerId"].empty()) {
      servicerId = make_shared<string>(boost::any_cast<string>(m["ServicerId"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("CallResult") != m.end() && !m["CallResult"].empty()) {
      callResult = make_shared<string>(boost::any_cast<string>(m["CallResult"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("AcidList") != m.end() && !m["AcidList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AcidList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AcidList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      acidList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CallTypeList") != m.end() && !m["CallTypeList"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["CallTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CallTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      callTypeList = make_shared<vector<int>>(toVec1);
    }
    if (m.find("GroupIdList") != m.end() && !m["GroupIdList"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      groupIdList = make_shared<vector<int>>(toVec1);
    }
    if (m.find("CallingNumberList") != m.end() && !m["CallingNumberList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CallingNumberList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CallingNumberList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      callingNumberList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CalledNumberList") != m.end() && !m["CalledNumberList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CalledNumberList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CalledNumberList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      calledNumberList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MemberIdList") != m.end() && !m["MemberIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MemberIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MemberIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      memberIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ServicerIdList") != m.end() && !m["ServicerIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServicerIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServicerIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      servicerIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CallResultList") != m.end() && !m["CallResultList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CallResultList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CallResultList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      callResultList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~HotlineSessionQueryRequest() = default;
};
class HotlineSessionQueryResponseBodyDataCallDetailRecord : public Darabonba::Model {
public:
  shared_ptr<string> callResult{};
  shared_ptr<string> trunkCall{};
  shared_ptr<string> servicerName{};
  shared_ptr<string> outQueueTime{};
  shared_ptr<long> callContinueTime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> pickUpTime{};
  shared_ptr<long> ringContinueTime{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> servicerId{};
  shared_ptr<string> hangUpTime{};
  shared_ptr<long> evaluationLevel{};
  shared_ptr<string> passiveTransferId{};
  shared_ptr<string> activeTransferId{};
  shared_ptr<string> hangUpRole{};
  shared_ptr<string> passiveTransferIdType{};
  shared_ptr<string> memberName{};
  shared_ptr<long> evaluationScore{};
  shared_ptr<string> acid{};
  shared_ptr<string> ringStartTime{};
  shared_ptr<long> callType{};
  shared_ptr<string> groupName{};
  shared_ptr<long> groupId{};
  shared_ptr<string> ringEndTime{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> inQueueTime{};
  shared_ptr<string> memberId{};
  shared_ptr<string> id{};
  shared_ptr<long> queueUpContinueTime{};

  HotlineSessionQueryResponseBodyDataCallDetailRecord() {}

  explicit HotlineSessionQueryResponseBodyDataCallDetailRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callResult) {
      res["CallResult"] = boost::any(*callResult);
    }
    if (trunkCall) {
      res["TrunkCall"] = boost::any(*trunkCall);
    }
    if (servicerName) {
      res["ServicerName"] = boost::any(*servicerName);
    }
    if (outQueueTime) {
      res["OutQueueTime"] = boost::any(*outQueueTime);
    }
    if (callContinueTime) {
      res["CallContinueTime"] = boost::any(*callContinueTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (pickUpTime) {
      res["PickUpTime"] = boost::any(*pickUpTime);
    }
    if (ringContinueTime) {
      res["RingContinueTime"] = boost::any(*ringContinueTime);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (servicerId) {
      res["ServicerId"] = boost::any(*servicerId);
    }
    if (hangUpTime) {
      res["HangUpTime"] = boost::any(*hangUpTime);
    }
    if (evaluationLevel) {
      res["EvaluationLevel"] = boost::any(*evaluationLevel);
    }
    if (passiveTransferId) {
      res["PassiveTransferId"] = boost::any(*passiveTransferId);
    }
    if (activeTransferId) {
      res["ActiveTransferId"] = boost::any(*activeTransferId);
    }
    if (hangUpRole) {
      res["HangUpRole"] = boost::any(*hangUpRole);
    }
    if (passiveTransferIdType) {
      res["PassiveTransferIdType"] = boost::any(*passiveTransferIdType);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (evaluationScore) {
      res["EvaluationScore"] = boost::any(*evaluationScore);
    }
    if (acid) {
      res["Acid"] = boost::any(*acid);
    }
    if (ringStartTime) {
      res["RingStartTime"] = boost::any(*ringStartTime);
    }
    if (callType) {
      res["CallType"] = boost::any(*callType);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (ringEndTime) {
      res["RingEndTime"] = boost::any(*ringEndTime);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (inQueueTime) {
      res["InQueueTime"] = boost::any(*inQueueTime);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (queueUpContinueTime) {
      res["QueueUpContinueTime"] = boost::any(*queueUpContinueTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallResult") != m.end() && !m["CallResult"].empty()) {
      callResult = make_shared<string>(boost::any_cast<string>(m["CallResult"]));
    }
    if (m.find("TrunkCall") != m.end() && !m["TrunkCall"].empty()) {
      trunkCall = make_shared<string>(boost::any_cast<string>(m["TrunkCall"]));
    }
    if (m.find("ServicerName") != m.end() && !m["ServicerName"].empty()) {
      servicerName = make_shared<string>(boost::any_cast<string>(m["ServicerName"]));
    }
    if (m.find("OutQueueTime") != m.end() && !m["OutQueueTime"].empty()) {
      outQueueTime = make_shared<string>(boost::any_cast<string>(m["OutQueueTime"]));
    }
    if (m.find("CallContinueTime") != m.end() && !m["CallContinueTime"].empty()) {
      callContinueTime = make_shared<long>(boost::any_cast<long>(m["CallContinueTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("PickUpTime") != m.end() && !m["PickUpTime"].empty()) {
      pickUpTime = make_shared<string>(boost::any_cast<string>(m["PickUpTime"]));
    }
    if (m.find("RingContinueTime") != m.end() && !m["RingContinueTime"].empty()) {
      ringContinueTime = make_shared<long>(boost::any_cast<long>(m["RingContinueTime"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("ServicerId") != m.end() && !m["ServicerId"].empty()) {
      servicerId = make_shared<string>(boost::any_cast<string>(m["ServicerId"]));
    }
    if (m.find("HangUpTime") != m.end() && !m["HangUpTime"].empty()) {
      hangUpTime = make_shared<string>(boost::any_cast<string>(m["HangUpTime"]));
    }
    if (m.find("EvaluationLevel") != m.end() && !m["EvaluationLevel"].empty()) {
      evaluationLevel = make_shared<long>(boost::any_cast<long>(m["EvaluationLevel"]));
    }
    if (m.find("PassiveTransferId") != m.end() && !m["PassiveTransferId"].empty()) {
      passiveTransferId = make_shared<string>(boost::any_cast<string>(m["PassiveTransferId"]));
    }
    if (m.find("ActiveTransferId") != m.end() && !m["ActiveTransferId"].empty()) {
      activeTransferId = make_shared<string>(boost::any_cast<string>(m["ActiveTransferId"]));
    }
    if (m.find("HangUpRole") != m.end() && !m["HangUpRole"].empty()) {
      hangUpRole = make_shared<string>(boost::any_cast<string>(m["HangUpRole"]));
    }
    if (m.find("PassiveTransferIdType") != m.end() && !m["PassiveTransferIdType"].empty()) {
      passiveTransferIdType = make_shared<string>(boost::any_cast<string>(m["PassiveTransferIdType"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("EvaluationScore") != m.end() && !m["EvaluationScore"].empty()) {
      evaluationScore = make_shared<long>(boost::any_cast<long>(m["EvaluationScore"]));
    }
    if (m.find("Acid") != m.end() && !m["Acid"].empty()) {
      acid = make_shared<string>(boost::any_cast<string>(m["Acid"]));
    }
    if (m.find("RingStartTime") != m.end() && !m["RingStartTime"].empty()) {
      ringStartTime = make_shared<string>(boost::any_cast<string>(m["RingStartTime"]));
    }
    if (m.find("CallType") != m.end() && !m["CallType"].empty()) {
      callType = make_shared<long>(boost::any_cast<long>(m["CallType"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["GroupId"]));
    }
    if (m.find("RingEndTime") != m.end() && !m["RingEndTime"].empty()) {
      ringEndTime = make_shared<string>(boost::any_cast<string>(m["RingEndTime"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("InQueueTime") != m.end() && !m["InQueueTime"].empty()) {
      inQueueTime = make_shared<string>(boost::any_cast<string>(m["InQueueTime"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("QueueUpContinueTime") != m.end() && !m["QueueUpContinueTime"].empty()) {
      queueUpContinueTime = make_shared<long>(boost::any_cast<long>(m["QueueUpContinueTime"]));
    }
  }


  virtual ~HotlineSessionQueryResponseBodyDataCallDetailRecord() = default;
};
class HotlineSessionQueryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<HotlineSessionQueryResponseBodyDataCallDetailRecord>> callDetailRecord{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> totalCount{};

  HotlineSessionQueryResponseBodyData() {}

  explicit HotlineSessionQueryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callDetailRecord) {
      vector<boost::any> temp1;
      for(auto item1:*callDetailRecord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CallDetailRecord"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallDetailRecord") != m.end() && !m["CallDetailRecord"].empty()) {
      if (typeid(vector<boost::any>) == m["CallDetailRecord"].type()) {
        vector<HotlineSessionQueryResponseBodyDataCallDetailRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CallDetailRecord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HotlineSessionQueryResponseBodyDataCallDetailRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        callDetailRecord = make_shared<vector<HotlineSessionQueryResponseBodyDataCallDetailRecord>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~HotlineSessionQueryResponseBodyData() = default;
};
class HotlineSessionQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<HotlineSessionQueryResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  HotlineSessionQueryResponseBody() {}

  explicit HotlineSessionQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        HotlineSessionQueryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<HotlineSessionQueryResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~HotlineSessionQueryResponseBody() = default;
};
class HotlineSessionQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<HotlineSessionQueryResponseBody> body{};

  HotlineSessionQueryResponse() {}

  explicit HotlineSessionQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        HotlineSessionQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HotlineSessionQueryResponseBody>(model1);
      }
    }
  }


  virtual ~HotlineSessionQueryResponse() = default;
};
class GetQueueInformationRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<long>> depIds{};
  shared_ptr<vector<long>> groupIds{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existSkillGroupGrouping{};

  GetQueueInformationRequest() {}

  explicit GetQueueInformationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existSkillGroupGrouping) {
      res["ExistSkillGroupGrouping"] = boost::any(*existSkillGroupGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DepIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      depIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      groupIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistSkillGroupGrouping") != m.end() && !m["ExistSkillGroupGrouping"].empty()) {
      existSkillGroupGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistSkillGroupGrouping"]));
    }
  }


  virtual ~GetQueueInformationRequest() = default;
};
class GetQueueInformationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> depIdsShrink{};
  shared_ptr<string> groupIdsShrink{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existSkillGroupGrouping{};

  GetQueueInformationShrinkRequest() {}

  explicit GetQueueInformationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (depIdsShrink) {
      res["DepIds"] = boost::any(*depIdsShrink);
    }
    if (groupIdsShrink) {
      res["GroupIds"] = boost::any(*groupIdsShrink);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existSkillGroupGrouping) {
      res["ExistSkillGroupGrouping"] = boost::any(*existSkillGroupGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      depIdsShrink = make_shared<string>(boost::any_cast<string>(m["DepIds"]));
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      groupIdsShrink = make_shared<string>(boost::any_cast<string>(m["GroupIds"]));
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistSkillGroupGrouping") != m.end() && !m["ExistSkillGroupGrouping"].empty()) {
      existSkillGroupGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistSkillGroupGrouping"]));
    }
  }


  virtual ~GetQueueInformationShrinkRequest() = default;
};
class GetQueueInformationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<string> rows{};

  GetQueueInformationResponseBodyData() {}

  explicit GetQueueInformationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<string>(boost::any_cast<string>(m["Rows"]));
    }
  }


  virtual ~GetQueueInformationResponseBodyData() = default;
};
class GetQueueInformationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};
  shared_ptr<GetQueueInformationResponseBodyData> data{};

  GetQueueInformationResponseBody() {}

  explicit GetQueueInformationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetQueueInformationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetQueueInformationResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetQueueInformationResponseBody() = default;
};
class GetQueueInformationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetQueueInformationResponseBody> body{};

  GetQueueInformationResponse() {}

  explicit GetQueueInformationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetQueueInformationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQueueInformationResponseBody>(model1);
      }
    }
  }


  virtual ~GetQueueInformationResponse() = default;
};
class GetSkillGroupServiceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<long>> agentIds{};
  shared_ptr<vector<long>> depIds{};
  shared_ptr<vector<long>> groupIds{};
  shared_ptr<string> timeLatitudeType{};
  shared_ptr<bool> existAgentGrouping{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existSkillGroupGrouping{};
  shared_ptr<bool> existRobotInstanceGrouping{};
  shared_ptr<bool> existChannelInstanceGrouping{};

  GetSkillGroupServiceStatusRequest() {}

  explicit GetSkillGroupServiceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (agentIds) {
      res["AgentIds"] = boost::any(*agentIds);
    }
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    if (timeLatitudeType) {
      res["TimeLatitudeType"] = boost::any(*timeLatitudeType);
    }
    if (existAgentGrouping) {
      res["ExistAgentGrouping"] = boost::any(*existAgentGrouping);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existSkillGroupGrouping) {
      res["ExistSkillGroupGrouping"] = boost::any(*existSkillGroupGrouping);
    }
    if (existRobotInstanceGrouping) {
      res["ExistRobotInstanceGrouping"] = boost::any(*existRobotInstanceGrouping);
    }
    if (existChannelInstanceGrouping) {
      res["ExistChannelInstanceGrouping"] = boost::any(*existChannelInstanceGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("AgentIds") != m.end() && !m["AgentIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AgentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AgentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      agentIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DepIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      depIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      groupIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("TimeLatitudeType") != m.end() && !m["TimeLatitudeType"].empty()) {
      timeLatitudeType = make_shared<string>(boost::any_cast<string>(m["TimeLatitudeType"]));
    }
    if (m.find("ExistAgentGrouping") != m.end() && !m["ExistAgentGrouping"].empty()) {
      existAgentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistAgentGrouping"]));
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistSkillGroupGrouping") != m.end() && !m["ExistSkillGroupGrouping"].empty()) {
      existSkillGroupGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistSkillGroupGrouping"]));
    }
    if (m.find("ExistRobotInstanceGrouping") != m.end() && !m["ExistRobotInstanceGrouping"].empty()) {
      existRobotInstanceGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistRobotInstanceGrouping"]));
    }
    if (m.find("ExistChannelInstanceGrouping") != m.end() && !m["ExistChannelInstanceGrouping"].empty()) {
      existChannelInstanceGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistChannelInstanceGrouping"]));
    }
  }


  virtual ~GetSkillGroupServiceStatusRequest() = default;
};
class GetSkillGroupServiceStatusShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> agentIdsShrink{};
  shared_ptr<string> depIdsShrink{};
  shared_ptr<string> groupIdsShrink{};
  shared_ptr<string> timeLatitudeType{};
  shared_ptr<bool> existAgentGrouping{};
  shared_ptr<bool> existDepartmentGrouping{};
  shared_ptr<bool> existSkillGroupGrouping{};
  shared_ptr<bool> existRobotInstanceGrouping{};
  shared_ptr<bool> existChannelInstanceGrouping{};

  GetSkillGroupServiceStatusShrinkRequest() {}

  explicit GetSkillGroupServiceStatusShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (agentIdsShrink) {
      res["AgentIds"] = boost::any(*agentIdsShrink);
    }
    if (depIdsShrink) {
      res["DepIds"] = boost::any(*depIdsShrink);
    }
    if (groupIdsShrink) {
      res["GroupIds"] = boost::any(*groupIdsShrink);
    }
    if (timeLatitudeType) {
      res["TimeLatitudeType"] = boost::any(*timeLatitudeType);
    }
    if (existAgentGrouping) {
      res["ExistAgentGrouping"] = boost::any(*existAgentGrouping);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    if (existSkillGroupGrouping) {
      res["ExistSkillGroupGrouping"] = boost::any(*existSkillGroupGrouping);
    }
    if (existRobotInstanceGrouping) {
      res["ExistRobotInstanceGrouping"] = boost::any(*existRobotInstanceGrouping);
    }
    if (existChannelInstanceGrouping) {
      res["ExistChannelInstanceGrouping"] = boost::any(*existChannelInstanceGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("AgentIds") != m.end() && !m["AgentIds"].empty()) {
      agentIdsShrink = make_shared<string>(boost::any_cast<string>(m["AgentIds"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      depIdsShrink = make_shared<string>(boost::any_cast<string>(m["DepIds"]));
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      groupIdsShrink = make_shared<string>(boost::any_cast<string>(m["GroupIds"]));
    }
    if (m.find("TimeLatitudeType") != m.end() && !m["TimeLatitudeType"].empty()) {
      timeLatitudeType = make_shared<string>(boost::any_cast<string>(m["TimeLatitudeType"]));
    }
    if (m.find("ExistAgentGrouping") != m.end() && !m["ExistAgentGrouping"].empty()) {
      existAgentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistAgentGrouping"]));
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
    if (m.find("ExistSkillGroupGrouping") != m.end() && !m["ExistSkillGroupGrouping"].empty()) {
      existSkillGroupGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistSkillGroupGrouping"]));
    }
    if (m.find("ExistRobotInstanceGrouping") != m.end() && !m["ExistRobotInstanceGrouping"].empty()) {
      existRobotInstanceGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistRobotInstanceGrouping"]));
    }
    if (m.find("ExistChannelInstanceGrouping") != m.end() && !m["ExistChannelInstanceGrouping"].empty()) {
      existChannelInstanceGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistChannelInstanceGrouping"]));
    }
  }


  virtual ~GetSkillGroupServiceStatusShrinkRequest() = default;
};
class GetSkillGroupServiceStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<string> rows{};
  shared_ptr<long> pageNum{};

  GetSkillGroupServiceStatusResponseBodyData() {}

  explicit GetSkillGroupServiceStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<string>(boost::any_cast<string>(m["Rows"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
  }


  virtual ~GetSkillGroupServiceStatusResponseBodyData() = default;
};
class GetSkillGroupServiceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};
  shared_ptr<GetSkillGroupServiceStatusResponseBodyData> data{};

  GetSkillGroupServiceStatusResponseBody() {}

  explicit GetSkillGroupServiceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSkillGroupServiceStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSkillGroupServiceStatusResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetSkillGroupServiceStatusResponseBody() = default;
};
class GetSkillGroupServiceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSkillGroupServiceStatusResponseBody> body{};

  GetSkillGroupServiceStatusResponse() {}

  explicit GetSkillGroupServiceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSkillGroupServiceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSkillGroupServiceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetSkillGroupServiceStatusResponse() = default;
};
class GetAgentDetailReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<long>> agentIds{};
  shared_ptr<vector<long>> depIds{};
  shared_ptr<string> timeLatitudeType{};
  shared_ptr<bool> existAgentGrouping{};
  shared_ptr<bool> existDepartmentGrouping{};

  GetAgentDetailReportRequest() {}

  explicit GetAgentDetailReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (agentIds) {
      res["AgentIds"] = boost::any(*agentIds);
    }
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    if (timeLatitudeType) {
      res["TimeLatitudeType"] = boost::any(*timeLatitudeType);
    }
    if (existAgentGrouping) {
      res["ExistAgentGrouping"] = boost::any(*existAgentGrouping);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("AgentIds") != m.end() && !m["AgentIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AgentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AgentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      agentIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DepIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      depIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("TimeLatitudeType") != m.end() && !m["TimeLatitudeType"].empty()) {
      timeLatitudeType = make_shared<string>(boost::any_cast<string>(m["TimeLatitudeType"]));
    }
    if (m.find("ExistAgentGrouping") != m.end() && !m["ExistAgentGrouping"].empty()) {
      existAgentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistAgentGrouping"]));
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
  }


  virtual ~GetAgentDetailReportRequest() = default;
};
class GetAgentDetailReportShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> agentIdsShrink{};
  shared_ptr<string> depIdsShrink{};
  shared_ptr<string> timeLatitudeType{};
  shared_ptr<bool> existAgentGrouping{};
  shared_ptr<bool> existDepartmentGrouping{};

  GetAgentDetailReportShrinkRequest() {}

  explicit GetAgentDetailReportShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (agentIdsShrink) {
      res["AgentIds"] = boost::any(*agentIdsShrink);
    }
    if (depIdsShrink) {
      res["DepIds"] = boost::any(*depIdsShrink);
    }
    if (timeLatitudeType) {
      res["TimeLatitudeType"] = boost::any(*timeLatitudeType);
    }
    if (existAgentGrouping) {
      res["ExistAgentGrouping"] = boost::any(*existAgentGrouping);
    }
    if (existDepartmentGrouping) {
      res["ExistDepartmentGrouping"] = boost::any(*existDepartmentGrouping);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("AgentIds") != m.end() && !m["AgentIds"].empty()) {
      agentIdsShrink = make_shared<string>(boost::any_cast<string>(m["AgentIds"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      depIdsShrink = make_shared<string>(boost::any_cast<string>(m["DepIds"]));
    }
    if (m.find("TimeLatitudeType") != m.end() && !m["TimeLatitudeType"].empty()) {
      timeLatitudeType = make_shared<string>(boost::any_cast<string>(m["TimeLatitudeType"]));
    }
    if (m.find("ExistAgentGrouping") != m.end() && !m["ExistAgentGrouping"].empty()) {
      existAgentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistAgentGrouping"]));
    }
    if (m.find("ExistDepartmentGrouping") != m.end() && !m["ExistDepartmentGrouping"].empty()) {
      existDepartmentGrouping = make_shared<bool>(boost::any_cast<bool>(m["ExistDepartmentGrouping"]));
    }
  }


  virtual ~GetAgentDetailReportShrinkRequest() = default;
};
class GetAgentDetailReportResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<string> rows{};

  GetAgentDetailReportResponseBodyData() {}

  explicit GetAgentDetailReportResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<string>(boost::any_cast<string>(m["Rows"]));
    }
  }


  virtual ~GetAgentDetailReportResponseBodyData() = default;
};
class GetAgentDetailReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};
  shared_ptr<GetAgentDetailReportResponseBodyData> data{};

  GetAgentDetailReportResponseBody() {}

  explicit GetAgentDetailReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAgentDetailReportResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAgentDetailReportResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetAgentDetailReportResponseBody() = default;
};
class GetAgentDetailReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAgentDetailReportResponseBody> body{};

  GetAgentDetailReportResponse() {}

  explicit GetAgentDetailReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAgentDetailReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAgentDetailReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetAgentDetailReportResponse() = default;
};
class QueryTicketsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> caseId{};
  shared_ptr<long> caseType{};
  shared_ptr<long> caseStatus{};
  shared_ptr<long> srType{};
  shared_ptr<long> taskStatus{};
  shared_ptr<string> channelId{};
  shared_ptr<long> channelType{};
  shared_ptr<long> touchId{};
  shared_ptr<long> dealId{};
  shared_ptr<map<string, boost::any>> extra{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};

  QueryTicketsRequest() {}

  explicit QueryTicketsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (caseId) {
      res["CaseId"] = boost::any(*caseId);
    }
    if (caseType) {
      res["CaseType"] = boost::any(*caseType);
    }
    if (caseStatus) {
      res["CaseStatus"] = boost::any(*caseStatus);
    }
    if (srType) {
      res["SrType"] = boost::any(*srType);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (touchId) {
      res["TouchId"] = boost::any(*touchId);
    }
    if (dealId) {
      res["DealId"] = boost::any(*dealId);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("CaseId") != m.end() && !m["CaseId"].empty()) {
      caseId = make_shared<long>(boost::any_cast<long>(m["CaseId"]));
    }
    if (m.find("CaseType") != m.end() && !m["CaseType"].empty()) {
      caseType = make_shared<long>(boost::any_cast<long>(m["CaseType"]));
    }
    if (m.find("CaseStatus") != m.end() && !m["CaseStatus"].empty()) {
      caseStatus = make_shared<long>(boost::any_cast<long>(m["CaseStatus"]));
    }
    if (m.find("SrType") != m.end() && !m["SrType"].empty()) {
      srType = make_shared<long>(boost::any_cast<long>(m["SrType"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<long>(boost::any_cast<long>(m["ChannelType"]));
    }
    if (m.find("TouchId") != m.end() && !m["TouchId"].empty()) {
      touchId = make_shared<long>(boost::any_cast<long>(m["TouchId"]));
    }
    if (m.find("DealId") != m.end() && !m["DealId"].empty()) {
      dealId = make_shared<long>(boost::any_cast<long>(m["DealId"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Extra"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extra = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
  }


  virtual ~QueryTicketsRequest() = default;
};
class QueryTicketsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> caseId{};
  shared_ptr<long> caseType{};
  shared_ptr<long> caseStatus{};
  shared_ptr<long> srType{};
  shared_ptr<long> taskStatus{};
  shared_ptr<string> channelId{};
  shared_ptr<long> channelType{};
  shared_ptr<long> touchId{};
  shared_ptr<long> dealId{};
  shared_ptr<string> extraShrink{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};

  QueryTicketsShrinkRequest() {}

  explicit QueryTicketsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (caseId) {
      res["CaseId"] = boost::any(*caseId);
    }
    if (caseType) {
      res["CaseType"] = boost::any(*caseType);
    }
    if (caseStatus) {
      res["CaseStatus"] = boost::any(*caseStatus);
    }
    if (srType) {
      res["SrType"] = boost::any(*srType);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (touchId) {
      res["TouchId"] = boost::any(*touchId);
    }
    if (dealId) {
      res["DealId"] = boost::any(*dealId);
    }
    if (extraShrink) {
      res["Extra"] = boost::any(*extraShrink);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("CaseId") != m.end() && !m["CaseId"].empty()) {
      caseId = make_shared<long>(boost::any_cast<long>(m["CaseId"]));
    }
    if (m.find("CaseType") != m.end() && !m["CaseType"].empty()) {
      caseType = make_shared<long>(boost::any_cast<long>(m["CaseType"]));
    }
    if (m.find("CaseStatus") != m.end() && !m["CaseStatus"].empty()) {
      caseStatus = make_shared<long>(boost::any_cast<long>(m["CaseStatus"]));
    }
    if (m.find("SrType") != m.end() && !m["SrType"].empty()) {
      srType = make_shared<long>(boost::any_cast<long>(m["SrType"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<long>(boost::any_cast<long>(m["ChannelType"]));
    }
    if (m.find("TouchId") != m.end() && !m["TouchId"].empty()) {
      touchId = make_shared<long>(boost::any_cast<long>(m["TouchId"]));
    }
    if (m.find("DealId") != m.end() && !m["DealId"].empty()) {
      dealId = make_shared<long>(boost::any_cast<long>(m["DealId"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extraShrink = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
  }


  virtual ~QueryTicketsShrinkRequest() = default;
};
class QueryTicketsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  QueryTicketsResponseBody() {}

  explicit QueryTicketsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryTicketsResponseBody() = default;
};
class QueryTicketsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryTicketsResponseBody> body{};

  QueryTicketsResponse() {}

  explicit QueryTicketsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTicketsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTicketsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTicketsResponse() = default;
};
class QueryOutboundTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};
  shared_ptr<long> taskType{};
  shared_ptr<string> taskName{};
  shared_ptr<string> startDate{};
  shared_ptr<string> endDate{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> skillGroup{};
  shared_ptr<string> ani{};
  shared_ptr<string> status{};
  shared_ptr<string> groupName{};
  shared_ptr<string> departmentId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};

  QueryOutboundTaskRequest() {}

  explicit QueryOutboundTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (skillGroup) {
      res["SkillGroup"] = boost::any(*skillGroup);
    }
    if (ani) {
      res["Ani"] = boost::any(*ani);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<long>(boost::any_cast<long>(m["TaskType"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("SkillGroup") != m.end() && !m["SkillGroup"].empty()) {
      skillGroup = make_shared<long>(boost::any_cast<long>(m["SkillGroup"]));
    }
    if (m.find("Ani") != m.end() && !m["Ani"].empty()) {
      ani = make_shared<string>(boost::any_cast<string>(m["Ani"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<string>(boost::any_cast<string>(m["DepartmentId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
  }


  virtual ~QueryOutboundTaskRequest() = default;
};
class QueryOutboundTaskResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<long> type{};
  shared_ptr<string> endDate{};
  shared_ptr<long> retryTime{};
  shared_ptr<long> retryInterval{};
  shared_ptr<string> startDate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> creator{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<long> model{};
  shared_ptr<long> buId{};
  shared_ptr<string> modifier{};
  shared_ptr<string> groupName{};
  shared_ptr<string> description{};
  shared_ptr<long> departmentId{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> skillGroup{};
  shared_ptr<string> name{};
  shared_ptr<string> extAttrs{};
  shared_ptr<string> callerNum{};
  shared_ptr<long> id{};

  QueryOutboundTaskResponseBodyDataList() {}

  explicit QueryOutboundTaskResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (retryTime) {
      res["RetryTime"] = boost::any(*retryTime);
    }
    if (retryInterval) {
      res["RetryInterval"] = boost::any(*retryInterval);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (buId) {
      res["BuId"] = boost::any(*buId);
    }
    if (modifier) {
      res["Modifier"] = boost::any(*modifier);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (skillGroup) {
      res["SkillGroup"] = boost::any(*skillGroup);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (extAttrs) {
      res["ExtAttrs"] = boost::any(*extAttrs);
    }
    if (callerNum) {
      res["CallerNum"] = boost::any(*callerNum);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("RetryTime") != m.end() && !m["RetryTime"].empty()) {
      retryTime = make_shared<long>(boost::any_cast<long>(m["RetryTime"]));
    }
    if (m.find("RetryInterval") != m.end() && !m["RetryInterval"].empty()) {
      retryInterval = make_shared<long>(boost::any_cast<long>(m["RetryInterval"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<long>(boost::any_cast<long>(m["Model"]));
    }
    if (m.find("BuId") != m.end() && !m["BuId"].empty()) {
      buId = make_shared<long>(boost::any_cast<long>(m["BuId"]));
    }
    if (m.find("Modifier") != m.end() && !m["Modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["Modifier"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<long>(boost::any_cast<long>(m["DepartmentId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("SkillGroup") != m.end() && !m["SkillGroup"].empty()) {
      skillGroup = make_shared<long>(boost::any_cast<long>(m["SkillGroup"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ExtAttrs") != m.end() && !m["ExtAttrs"].empty()) {
      extAttrs = make_shared<string>(boost::any_cast<string>(m["ExtAttrs"]));
    }
    if (m.find("CallerNum") != m.end() && !m["CallerNum"].empty()) {
      callerNum = make_shared<string>(boost::any_cast<string>(m["CallerNum"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~QueryOutboundTaskResponseBodyDataList() = default;
};
class QueryOutboundTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> totalResults{};
  shared_ptr<string> currentPage{};
  shared_ptr<vector<QueryOutboundTaskResponseBodyDataList>> list{};
  shared_ptr<string> pageSize{};

  QueryOutboundTaskResponseBodyData() {}

  explicit QueryOutboundTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalResults) {
      res["TotalResults"] = boost::any(*totalResults);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalResults") != m.end() && !m["TotalResults"].empty()) {
      totalResults = make_shared<string>(boost::any_cast<string>(m["TotalResults"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<QueryOutboundTaskResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryOutboundTaskResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<QueryOutboundTaskResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~QueryOutboundTaskResponseBodyData() = default;
};
class QueryOutboundTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<QueryOutboundTaskResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};

  QueryOutboundTaskResponseBody() {}

  explicit QueryOutboundTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["HttpStatusCode"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryOutboundTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryOutboundTaskResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~QueryOutboundTaskResponseBody() = default;
};
class QueryOutboundTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryOutboundTaskResponseBody> body{};

  QueryOutboundTaskResponse() {}

  explicit QueryOutboundTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryOutboundTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryOutboundTaskResponseBody>(model1);
      }
    }
  }


  virtual ~QueryOutboundTaskResponse() = default;
};
class JoinThirdCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> callId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> connectionId{};
  shared_ptr<string> holdConnectionId{};

  JoinThirdCallRequest() {}

  explicit JoinThirdCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
    }
    if (holdConnectionId) {
      res["HoldConnectionId"] = boost::any(*holdConnectionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
    if (m.find("HoldConnectionId") != m.end() && !m["HoldConnectionId"].empty()) {
      holdConnectionId = make_shared<string>(boost::any_cast<string>(m["HoldConnectionId"]));
    }
  }


  virtual ~JoinThirdCallRequest() = default;
};
class JoinThirdCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  JoinThirdCallResponseBody() {}

  explicit JoinThirdCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~JoinThirdCallResponseBody() = default;
};
class JoinThirdCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<JoinThirdCallResponseBody> body{};

  JoinThirdCallResponse() {}

  explicit JoinThirdCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        JoinThirdCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<JoinThirdCallResponseBody>(model1);
      }
    }
  }


  virtual ~JoinThirdCallResponse() = default;
};
class CreateSkillGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> skillGroupName{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<long> channelType{};
  shared_ptr<string> clientToken{};

  CreateSkillGroupRequest() {}

  explicit CreateSkillGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (skillGroupName) {
      res["SkillGroupName"] = boost::any(*skillGroupName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SkillGroupName") != m.end() && !m["SkillGroupName"].empty()) {
      skillGroupName = make_shared<string>(boost::any_cast<string>(m["SkillGroupName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<long>(boost::any_cast<long>(m["ChannelType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~CreateSkillGroupRequest() = default;
};
class CreateSkillGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  CreateSkillGroupResponseBody() {}

  explicit CreateSkillGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateSkillGroupResponseBody() = default;
};
class CreateSkillGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSkillGroupResponseBody> body{};

  CreateSkillGroupResponse() {}

  explicit CreateSkillGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSkillGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSkillGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSkillGroupResponse() = default;
};
class RestartOutboundTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> outboundTaskId{};
  shared_ptr<string> instanceId{};

  RestartOutboundTaskRequest() {}

  explicit RestartOutboundTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outboundTaskId) {
      res["OutboundTaskId"] = boost::any(*outboundTaskId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutboundTaskId") != m.end() && !m["OutboundTaskId"].empty()) {
      outboundTaskId = make_shared<long>(boost::any_cast<long>(m["OutboundTaskId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~RestartOutboundTaskRequest() = default;
};
class RestartOutboundTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  RestartOutboundTaskResponseBody() {}

  explicit RestartOutboundTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RestartOutboundTaskResponseBody() = default;
};
class RestartOutboundTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RestartOutboundTaskResponseBody> body{};

  RestartOutboundTaskResponse() {}

  explicit RestartOutboundTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RestartOutboundTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartOutboundTaskResponseBody>(model1);
      }
    }
  }


  virtual ~RestartOutboundTaskResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  SendHotlineHeartBeatResponse sendHotlineHeartBeatWithOptions(shared_ptr<SendHotlineHeartBeatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendHotlineHeartBeatResponse sendHotlineHeartBeat(shared_ptr<SendHotlineHeartBeatRequest> request);
  StartChatWorkResponse startChatWorkWithOptions(shared_ptr<StartChatWorkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartChatWorkResponse startChatWork(shared_ptr<StartChatWorkRequest> request);
  HangUpDoubleCallResponse hangUpDoubleCallWithOptions(shared_ptr<HangUpDoubleCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HangUpDoubleCallResponse hangUpDoubleCall(shared_ptr<HangUpDoubleCallRequest> request);
  UpdateAgentResponse updateAgentWithOptions(shared_ptr<UpdateAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAgentResponse updateAgent(shared_ptr<UpdateAgentRequest> request);
  EditQualityRuleTagResponse editQualityRuleTagWithOptions(shared_ptr<EditQualityRuleTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EditQualityRuleTagResponse editQualityRuleTag(shared_ptr<EditQualityRuleTagRequest> request);
  GetOnlineServiceVolumeResponse getOnlineServiceVolumeWithOptions(shared_ptr<GetOnlineServiceVolumeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOnlineServiceVolumeResponse getOnlineServiceVolume(shared_ptr<GetOnlineServiceVolumeRequest> request);
  DeleteOutboundTaskResponse deleteOutboundTaskWithOptions(shared_ptr<DeleteOutboundTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteOutboundTaskResponse deleteOutboundTask(shared_ptr<DeleteOutboundTaskRequest> request);
  AddOuterAccountResponse addOuterAccountWithOptions(shared_ptr<AddOuterAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddOuterAccountResponse addOuterAccount(shared_ptr<AddOuterAccountRequest> request);
  GetAgentByIdResponse getAgentByIdWithOptions(shared_ptr<GetAgentByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAgentByIdResponse getAgentById(shared_ptr<GetAgentByIdRequest> request);
  GetQualityRuleDetailResponse getQualityRuleDetailWithOptions(shared_ptr<GetQualityRuleDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQualityRuleDetailResponse getQualityRuleDetail(shared_ptr<GetQualityRuleDetailRequest> request);
  GetQualityProjectLogResponse getQualityProjectLogWithOptions(shared_ptr<GetQualityProjectLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQualityProjectLogResponse getQualityProjectLog(shared_ptr<GetQualityProjectLogRequest> request);
  ListHotlineRecordDetailResponse listHotlineRecordDetailWithOptions(shared_ptr<ListHotlineRecordDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHotlineRecordDetailResponse listHotlineRecordDetail(shared_ptr<ListHotlineRecordDetailRequest> request);
  GetHotlineMessageLogResponse getHotlineMessageLogWithOptions(shared_ptr<GetHotlineMessageLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotlineMessageLogResponse getHotlineMessageLog(shared_ptr<GetHotlineMessageLogRequest> request);
  GetQualityProjectListResponse getQualityProjectListWithOptions(shared_ptr<GetQualityProjectListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQualityProjectListResponse getQualityProjectList(shared_ptr<GetQualityProjectListRequest> request);
  CreateOutboundTaskResponse createOutboundTaskWithOptions(shared_ptr<CreateOutboundTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOutboundTaskResponse createOutboundTask(shared_ptr<CreateOutboundTaskRequest> request);
  GetHotlineRuntimeInfoResponse getHotlineRuntimeInfoWithOptions(shared_ptr<GetHotlineRuntimeInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotlineRuntimeInfoResponse getHotlineRuntimeInfo(shared_ptr<GetHotlineRuntimeInfoRequest> request);
  MakeDoubleCallResponse makeDoubleCallWithOptions(shared_ptr<MakeDoubleCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MakeDoubleCallResponse makeDoubleCall(shared_ptr<MakeDoubleCallRequest> request);
  GetSkillGroupAgentStatusDetailsResponse getSkillGroupAgentStatusDetailsWithOptions(shared_ptr<GetSkillGroupAgentStatusDetailsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSkillGroupAgentStatusDetailsResponse getSkillGroupAgentStatusDetails(shared_ptr<GetSkillGroupAgentStatusDetailsRequest> request);
  GetAgentServiceStatusResponse getAgentServiceStatusWithOptions(shared_ptr<GetAgentServiceStatusRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAgentServiceStatusResponse getAgentServiceStatus(shared_ptr<GetAgentServiceStatusRequest> request);
  GetNumLocationResponse getNumLocationWithOptions(shared_ptr<GetNumLocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNumLocationResponse getNumLocation(shared_ptr<GetNumLocationRequest> request);
  GetQualityRuleListResponse getQualityRuleListWithOptions(shared_ptr<GetQualityRuleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQualityRuleListResponse getQualityRuleList(shared_ptr<GetQualityRuleListRequest> request);
  ListOutboundPhoneNumberResponse listOutboundPhoneNumberWithOptions(shared_ptr<ListOutboundPhoneNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOutboundPhoneNumberResponse listOutboundPhoneNumber(shared_ptr<ListOutboundPhoneNumberRequest> request);
  ListAgentBySkillGroupIdResponse listAgentBySkillGroupIdWithOptions(shared_ptr<ListAgentBySkillGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAgentBySkillGroupIdResponse listAgentBySkillGroupId(shared_ptr<ListAgentBySkillGroupIdRequest> request);
  HangupThirdCallResponse hangupThirdCallWithOptions(shared_ptr<HangupThirdCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HangupThirdCallResponse hangupThirdCall(shared_ptr<HangupThirdCallRequest> request);
  StartHotlineServiceResponse startHotlineServiceWithOptions(shared_ptr<StartHotlineServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartHotlineServiceResponse startHotlineService(shared_ptr<StartHotlineServiceRequest> request);
  GetAgentResponse getAgentWithOptions(shared_ptr<GetAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAgentResponse getAgent(shared_ptr<GetAgentRequest> request);
  GetAgentIndexRealTimeResponse getAgentIndexRealTimeWithOptions(shared_ptr<GetAgentIndexRealTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAgentIndexRealTimeResponse getAgentIndexRealTime(shared_ptr<GetAgentIndexRealTimeRequest> request);
  GetHotlineGroupDetailReportResponse getHotlineGroupDetailReportWithOptions(shared_ptr<GetHotlineGroupDetailReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotlineGroupDetailReportResponse getHotlineGroupDetailReport(shared_ptr<GetHotlineGroupDetailReportRequest> request);
  EncryptPhoneNumResponse encryptPhoneNumWithOptions(shared_ptr<EncryptPhoneNumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EncryptPhoneNumResponse encryptPhoneNum(shared_ptr<EncryptPhoneNumRequest> request);
  GetInstanceListResponse getInstanceListWithOptions(shared_ptr<GetInstanceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceListResponse getInstanceList(shared_ptr<GetInstanceListRequest> request);
  GetQualityProjectDetailResponse getQualityProjectDetailWithOptions(shared_ptr<GetQualityProjectDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQualityProjectDetailResponse getQualityProjectDetail(shared_ptr<GetQualityProjectDetailRequest> request);
  SendCcoSmartCallOperateResponse sendCcoSmartCallOperateWithOptions(shared_ptr<SendCcoSmartCallOperateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendCcoSmartCallOperateResponse sendCcoSmartCallOperate(shared_ptr<SendCcoSmartCallOperateRequest> request);
  AnswerCallResponse answerCallWithOptions(shared_ptr<AnswerCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AnswerCallResponse answerCall(shared_ptr<AnswerCallRequest> request);
  StartMicroOutboundResponse startMicroOutboundWithOptions(shared_ptr<StartMicroOutboundRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartMicroOutboundResponse startMicroOutbound(shared_ptr<StartMicroOutboundRequest> request);
  SuspendHotlineServiceResponse suspendHotlineServiceWithOptions(shared_ptr<SuspendHotlineServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SuspendHotlineServiceResponse suspendHotlineService(shared_ptr<SuspendHotlineServiceRequest> request);
  GetAgentStatisticsResponse getAgentStatisticsWithOptions(shared_ptr<GetAgentStatisticsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAgentStatisticsResponse getAgentStatistics(shared_ptr<GetAgentStatisticsRequest> request);
  UpdateOuterAccountResponse updateOuterAccountWithOptions(shared_ptr<UpdateOuterAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateOuterAccountResponse updateOuterAccount(shared_ptr<UpdateOuterAccountRequest> request);
  GetHotlineWaitingNumberResponse getHotlineWaitingNumberWithOptions(shared_ptr<GetHotlineWaitingNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotlineWaitingNumberResponse getHotlineWaitingNumber(shared_ptr<GetHotlineWaitingNumberRequest> request);
  HoldCallResponse holdCallWithOptions(shared_ptr<HoldCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HoldCallResponse holdCall(shared_ptr<HoldCallRequest> request);
  GetSeatInformationResponse getSeatInformationWithOptions(shared_ptr<GetSeatInformationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSeatInformationResponse getSeatInformation(shared_ptr<GetSeatInformationRequest> request);
  GetRtcTokenResponse getRtcTokenWithOptions(shared_ptr<GetRtcTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRtcTokenResponse getRtcToken(shared_ptr<GetRtcTokenRequest> request);
  GetSkillGroupAndAgentStatusSummaryResponse getSkillGroupAndAgentStatusSummaryWithOptions(shared_ptr<GetSkillGroupAndAgentStatusSummaryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSkillGroupAndAgentStatusSummaryResponse getSkillGroupAndAgentStatusSummary(shared_ptr<GetSkillGroupAndAgentStatusSummaryRequest> request);
  GetRecordDataResponse getRecordDataWithOptions(shared_ptr<GetRecordDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRecordDataResponse getRecordData(shared_ptr<GetRecordDataRequest> request);
  GetSkillGroupLatitudeStateResponse getSkillGroupLatitudeStateWithOptions(shared_ptr<GetSkillGroupLatitudeStateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSkillGroupLatitudeStateResponse getSkillGroupLatitudeState(shared_ptr<GetSkillGroupLatitudeStateRequest> request);
  DeleteQualityRuleResponse deleteQualityRuleWithOptions(shared_ptr<DeleteQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteQualityRuleResponse deleteQualityRule(shared_ptr<DeleteQualityRuleRequest> request);
  SuspendOutboundTaskResponse suspendOutboundTaskWithOptions(shared_ptr<SuspendOutboundTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SuspendOutboundTaskResponse suspendOutboundTask(shared_ptr<SuspendOutboundTaskRequest> request);
  GetHotlineServiceStatisticsResponse getHotlineServiceStatisticsWithOptions(shared_ptr<GetHotlineServiceStatisticsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotlineServiceStatisticsResponse getHotlineServiceStatistics(shared_ptr<GetHotlineServiceStatisticsRequest> request);
  EditQualityProjectResponse editQualityProjectWithOptions(shared_ptr<EditQualityProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EditQualityProjectResponse editQualityProject(shared_ptr<EditQualityProjectRequest> request);
  ListOuterOrderedNumbersResponse listOuterOrderedNumbersWithOptions(shared_ptr<ListOuterOrderedNumbersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOuterOrderedNumbersResponse listOuterOrderedNumbers(shared_ptr<ListOuterOrderedNumbersRequest> request);
  GetAgentBasisStatusResponse getAgentBasisStatusWithOptions(shared_ptr<GetAgentBasisStatusRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAgentBasisStatusResponse getAgentBasisStatus(shared_ptr<GetAgentBasisStatusRequest> request);
  GetQualityResultResponse getQualityResultWithOptions(shared_ptr<GetQualityResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQualityResultResponse getQualityResult(shared_ptr<GetQualityResultRequest> request);
  GetIndexCurrentValueResponse getIndexCurrentValueWithOptions(shared_ptr<GetIndexCurrentValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIndexCurrentValueResponse getIndexCurrentValue(shared_ptr<GetIndexCurrentValueRequest> request);
  GenerateWebSocketSignResponse generateWebSocketSignWithOptions(shared_ptr<GenerateWebSocketSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateWebSocketSignResponse generateWebSocketSign(shared_ptr<GenerateWebSocketSignRequest> request);
  CreateAgentResponse createAgentWithOptions(shared_ptr<CreateAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAgentResponse createAgent(shared_ptr<CreateAgentRequest> request);
  QueryTaskDetailResponse queryTaskDetailWithOptions(shared_ptr<QueryTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTaskDetailResponse queryTaskDetail(shared_ptr<QueryTaskDetailRequest> request);
  EditQualityRuleResponse editQualityRuleWithOptions(shared_ptr<EditQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EditQualityRuleResponse editQualityRule(shared_ptr<EditQualityRuleRequest> request);
  GetMcuLvsIpResponse getMcuLvsIpWithOptions(shared_ptr<GetMcuLvsIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMcuLvsIpResponse getMcuLvsIp(shared_ptr<GetMcuLvsIpRequest> request);
  GetDepGroupTreeDataResponse getDepGroupTreeDataWithOptions(shared_ptr<GetDepGroupTreeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDepGroupTreeDataResponse getDepGroupTreeData(shared_ptr<GetDepGroupTreeDataRequest> request);
  DeleteAgentResponse deleteAgentWithOptions(shared_ptr<DeleteAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAgentResponse deleteAgent(shared_ptr<DeleteAgentRequest> request);
  GetCustomerInfoResponse getCustomerInfoWithOptions(shared_ptr<GetCustomerInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCustomerInfoResponse getCustomerInfo(shared_ptr<GetCustomerInfoRequest> request);
  GetHotlineAgentDetailReportResponse getHotlineAgentDetailReportWithOptions(shared_ptr<GetHotlineAgentDetailReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotlineAgentDetailReportResponse getHotlineAgentDetailReport(shared_ptr<GetHotlineAgentDetailReportRequest> request);
  SendCcoSmartCallResponse sendCcoSmartCallWithOptions(shared_ptr<SendCcoSmartCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendCcoSmartCallResponse sendCcoSmartCall(shared_ptr<SendCcoSmartCallRequest> request);
  ListChatRecordDetailResponse listChatRecordDetailWithOptions(shared_ptr<ListChatRecordDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChatRecordDetailResponse listChatRecordDetail(shared_ptr<ListChatRecordDetailRequest> request);
  AddSkillGroupResponse addSkillGroupWithOptions(shared_ptr<AddSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddSkillGroupResponse addSkillGroup(shared_ptr<AddSkillGroupRequest> request);
  HangupCallResponse hangupCallWithOptions(shared_ptr<HangupCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HangupCallResponse hangupCall(shared_ptr<HangupCallRequest> request);
  DeleteSkillGroupResponse deleteSkillGroupWithOptions(shared_ptr<DeleteSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSkillGroupResponse deleteSkillGroup(shared_ptr<DeleteSkillGroupRequest> request);
  CreateQualityProjectResponse createQualityProjectWithOptions(shared_ptr<CreateQualityProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateQualityProjectResponse createQualityProject(shared_ptr<CreateQualityProjectRequest> request);
  QuerySkillGroupsResponse querySkillGroupsWithOptions(shared_ptr<QuerySkillGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySkillGroupsResponse querySkillGroups(shared_ptr<QuerySkillGroupsRequest> request);
  CreateQualityRuleResponse createQualityRuleWithOptions(shared_ptr<CreateQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateQualityRuleResponse createQualityRule(shared_ptr<CreateQualityRuleRequest> request);
  ListRolesResponse listRolesWithOptions(shared_ptr<ListRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRolesResponse listRoles(shared_ptr<ListRolesRequest> request);
  GetHotlineCallActionResponse getHotlineCallActionWithOptions(shared_ptr<GetHotlineCallActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotlineCallActionResponse getHotlineCallAction(shared_ptr<GetHotlineCallActionRequest> request);
  ListSkillGroupResponse listSkillGroupWithOptions(shared_ptr<ListSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSkillGroupResponse listSkillGroup(shared_ptr<ListSkillGroupRequest> request);
  GetOnlineSeatInformationResponse getOnlineSeatInformationWithOptions(shared_ptr<GetOnlineSeatInformationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOnlineSeatInformationResponse getOnlineSeatInformation(shared_ptr<GetOnlineSeatInformationRequest> request);
  DeleteQualityProjectResponse deleteQualityProjectWithOptions(shared_ptr<DeleteQualityProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteQualityProjectResponse deleteQualityProject(shared_ptr<DeleteQualityProjectRequest> request);
  QueryTouchListResponse queryTouchListWithOptions(shared_ptr<QueryTouchListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTouchListResponse queryTouchList(shared_ptr<QueryTouchListRequest> request);
  QueryHotlineInQueueResponse queryHotlineInQueueWithOptions(shared_ptr<QueryHotlineInQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryHotlineInQueueResponse queryHotlineInQueue(shared_ptr<QueryHotlineInQueueRequest> request);
  FinishHotlineServiceResponse finishHotlineServiceWithOptions(shared_ptr<FinishHotlineServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FinishHotlineServiceResponse finishHotlineService(shared_ptr<FinishHotlineServiceRequest> request);
  ListOutboundStrategiesResponse listOutboundStrategiesWithOptions(shared_ptr<ListOutboundStrategiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOutboundStrategiesResponse listOutboundStrategies(shared_ptr<ListOutboundStrategiesRequest> request);
  ListHotlineRecordResponse listHotlineRecordWithOptions(shared_ptr<ListHotlineRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHotlineRecordResponse listHotlineRecord(shared_ptr<ListHotlineRecordRequest> request);
  ChangeQualityProjectStatusResponse changeQualityProjectStatusWithOptions(shared_ptr<ChangeQualityProjectStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeQualityProjectStatusResponse changeQualityProjectStatus(shared_ptr<ChangeQualityProjectStatusRequest> request);
  TransferCallToSkillGroupResponse transferCallToSkillGroupWithOptions(shared_ptr<TransferCallToSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransferCallToSkillGroupResponse transferCallToSkillGroup(shared_ptr<TransferCallToSkillGroupRequest> request);
  GetSkillGroupServiceCapabilityResponse getSkillGroupServiceCapabilityWithOptions(shared_ptr<GetSkillGroupServiceCapabilityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSkillGroupServiceCapabilityResponse getSkillGroupServiceCapability(shared_ptr<GetSkillGroupServiceCapabilityRequest> request);
  RemoveSkillGroupResponse removeSkillGroupWithOptions(shared_ptr<RemoveSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveSkillGroupResponse removeSkillGroup(shared_ptr<RemoveSkillGroupRequest> request);
  StartCallV2Response startCallV2WithOptions(shared_ptr<StartCallV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartCallV2Response startCallV2(shared_ptr<StartCallV2Request> request);
  ChangeChatAgentStatusResponse changeChatAgentStatusWithOptions(shared_ptr<ChangeChatAgentStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeChatAgentStatusResponse changeChatAgentStatus(shared_ptr<ChangeChatAgentStatusRequest> request);
  DescribeRecordDataResponse describeRecordDataWithOptions(shared_ptr<DescribeRecordDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRecordDataResponse describeRecordData(shared_ptr<DescribeRecordDataRequest> request);
  DeleteOuterAccountResponse deleteOuterAccountWithOptions(shared_ptr<DeleteOuterAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteOuterAccountResponse deleteOuterAccount(shared_ptr<DeleteOuterAccountRequest> request);
  GetDepartmentalLatitudeAgentStatusResponse getDepartmentalLatitudeAgentStatusWithOptions(shared_ptr<GetDepartmentalLatitudeAgentStatusRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDepartmentalLatitudeAgentStatusResponse getDepartmentalLatitudeAgentStatus(shared_ptr<GetDepartmentalLatitudeAgentStatusRequest> request);
  GetHotlineAgentDetailResponse getHotlineAgentDetailWithOptions(shared_ptr<GetHotlineAgentDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotlineAgentDetailResponse getHotlineAgentDetail(shared_ptr<GetHotlineAgentDetailRequest> request);
  MakeCallResponse makeCallWithOptions(shared_ptr<MakeCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MakeCallResponse makeCall(shared_ptr<MakeCallRequest> request);
  FetchCallResponse fetchCallWithOptions(shared_ptr<FetchCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FetchCallResponse fetchCall(shared_ptr<FetchCallRequest> request);
  GetHotlineAgentStatusResponse getHotlineAgentStatusWithOptions(shared_ptr<GetHotlineAgentStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotlineAgentStatusResponse getHotlineAgentStatus(shared_ptr<GetHotlineAgentStatusRequest> request);
  StartCallResponse startCallWithOptions(shared_ptr<StartCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartCallResponse startCall(shared_ptr<StartCallRequest> request);
  GetQualityRuleTagListResponse getQualityRuleTagListWithOptions(shared_ptr<GetQualityRuleTagListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQualityRuleTagListResponse getQualityRuleTagList(shared_ptr<GetQualityRuleTagListRequest> request);
  GetOutbounNumListResponse getOutbounNumListWithOptions(shared_ptr<GetOutbounNumListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOutbounNumListResponse getOutbounNumList(shared_ptr<GetOutbounNumListRequest> request);
  CreateThirdSsoAgentResponse createThirdSsoAgentWithOptions(shared_ptr<CreateThirdSsoAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateThirdSsoAgentResponse createThirdSsoAgent(shared_ptr<CreateThirdSsoAgentRequest> request);
  GetSkillGroupStatusTotalResponse getSkillGroupStatusTotalWithOptions(shared_ptr<GetSkillGroupStatusTotalRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSkillGroupStatusTotalResponse getSkillGroupStatusTotal(shared_ptr<GetSkillGroupStatusTotalRequest> request);
  BatchCreateQualityProjectsResponse batchCreateQualityProjectsWithOptions(shared_ptr<BatchCreateQualityProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchCreateQualityProjectsResponse batchCreateQualityProjects(shared_ptr<BatchCreateQualityProjectsRequest> request);
  InsertTaskDetailResponse insertTaskDetailWithOptions(shared_ptr<InsertTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InsertTaskDetailResponse insertTaskDetail(shared_ptr<InsertTaskDetailRequest> request);
  UpdateSkillGroupResponse updateSkillGroupWithOptions(shared_ptr<UpdateSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSkillGroupResponse updateSkillGroup(shared_ptr<UpdateSkillGroupRequest> request);
  HotlineSessionQueryResponse hotlineSessionQueryWithOptions(shared_ptr<HotlineSessionQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HotlineSessionQueryResponse hotlineSessionQuery(shared_ptr<HotlineSessionQueryRequest> request);
  GetQueueInformationResponse getQueueInformationWithOptions(shared_ptr<GetQueueInformationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQueueInformationResponse getQueueInformation(shared_ptr<GetQueueInformationRequest> request);
  GetSkillGroupServiceStatusResponse getSkillGroupServiceStatusWithOptions(shared_ptr<GetSkillGroupServiceStatusRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSkillGroupServiceStatusResponse getSkillGroupServiceStatus(shared_ptr<GetSkillGroupServiceStatusRequest> request);
  GetAgentDetailReportResponse getAgentDetailReportWithOptions(shared_ptr<GetAgentDetailReportRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAgentDetailReportResponse getAgentDetailReport(shared_ptr<GetAgentDetailReportRequest> request);
  QueryTicketsResponse queryTicketsWithOptions(shared_ptr<QueryTicketsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTicketsResponse queryTickets(shared_ptr<QueryTicketsRequest> request);
  QueryOutboundTaskResponse queryOutboundTaskWithOptions(shared_ptr<QueryOutboundTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryOutboundTaskResponse queryOutboundTask(shared_ptr<QueryOutboundTaskRequest> request);
  JoinThirdCallResponse joinThirdCallWithOptions(shared_ptr<JoinThirdCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  JoinThirdCallResponse joinThirdCall(shared_ptr<JoinThirdCallRequest> request);
  CreateSkillGroupResponse createSkillGroupWithOptions(shared_ptr<CreateSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSkillGroupResponse createSkillGroup(shared_ptr<CreateSkillGroupRequest> request);
  RestartOutboundTaskResponse restartOutboundTaskWithOptions(shared_ptr<RestartOutboundTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartOutboundTaskResponse restartOutboundTask(shared_ptr<RestartOutboundTaskRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Aiccs20191015

#endif
