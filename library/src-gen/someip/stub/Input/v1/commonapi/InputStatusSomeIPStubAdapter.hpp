/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#ifndef V1_COMMONAPI_INPUT_STATUS_SOMEIP_STUB_ADAPTER_HPP_
#define V1_COMMONAPI_INPUT_STATUS_SOMEIP_STUB_ADAPTER_HPP_

#include <v1/commonapi/InputStatusStub.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>
#include <CommonAPI/SomeIP/StubAdapterHelper.hpp>
#include <CommonAPI/SomeIP/StubAdapter.hpp>
#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Types.hpp>
#include <CommonAPI/SomeIP/Constants.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v1 {
namespace commonapi {

template <typename _Stub = ::v1::commonapi::InputStatusStub, typename... _Stubs>
class InputStatusSomeIPStubAdapterInternal
    : public virtual InputStatusStubAdapter,
      public CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...>,
      public std::enable_shared_from_this< InputStatusSomeIPStubAdapterInternal<_Stub, _Stubs...>>
{
public:
    typedef CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...> InputStatusSomeIPStubAdapterHelper;

    ~InputStatusSomeIPStubAdapterInternal() {
        deactivateManagedInstances();
        InputStatusSomeIPStubAdapterHelper::deinit();
    }

    void fireBrakeAttributeChanged(const bool &_value);
    
    void fireSteeringAttributeChanged(const float &_value);
    
    void fireThrottleAttributeChanged(const float &_value);
    
    void fireGearSelectEvent(const uint8_t &_setGear);

    void deactivateManagedInstances() {}
    
    CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::commonapi::InputStatusStub,
        CommonAPI::Version
    > getInputStatusInterfaceVersionStubDispatcher;

    CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::commonapi::InputStatusStub,
        bool
    > getBrakeAttributeStubDispatcher;
    
    CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
        ::v1::commonapi::InputStatusStub,
        bool
    > setBrakeAttributeStubDispatcher;
    
    CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::commonapi::InputStatusStub,
        float
    > getSteeringAttributeStubDispatcher;
    
    CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
        ::v1::commonapi::InputStatusStub,
        float
    > setSteeringAttributeStubDispatcher;
    
    CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::commonapi::InputStatusStub,
        float
    > getThrottleAttributeStubDispatcher;
    
    CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
        ::v1::commonapi::InputStatusStub,
        float
    > setThrottleAttributeStubDispatcher;
    
    InputStatusSomeIPStubAdapterInternal(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub):
        CommonAPI::SomeIP::StubAdapter(_address, _connection),
        InputStatusSomeIPStubAdapterHelper(
            _address,
            _connection,
            std::dynamic_pointer_cast< InputStatusStub>(_stub)),
        getInputStatusInterfaceVersionStubDispatcher(&InputStatusStub::lockInterfaceVersionAttribute, &InputStatusStub::getInterfaceVersion, false, true),
        getBrakeAttributeStubDispatcher(
            &::v1::commonapi::InputStatusStub::lockBrakeAttribute,
            &::v1::commonapi::InputStatusStub::getBrakeAttribute,
            false,
            _stub->hasElement(0)),
        setBrakeAttributeStubDispatcher(
            &::v1::commonapi::InputStatusStub::lockBrakeAttribute,
            &::v1::commonapi::InputStatusStub::getBrakeAttribute,
            &InputStatusStubRemoteEvent::onRemoteSetBrakeAttribute,
            &InputStatusStubRemoteEvent::onRemoteBrakeAttributeChanged,
            &InputStatusStubAdapter::fireBrakeAttributeChanged,
            false,
            _stub->hasElement(0))
        ,
        getSteeringAttributeStubDispatcher(
            &::v1::commonapi::InputStatusStub::lockSteeringAttribute,
            &::v1::commonapi::InputStatusStub::getSteeringAttribute,
            false,
            _stub->hasElement(1)),
        setSteeringAttributeStubDispatcher(
            &::v1::commonapi::InputStatusStub::lockSteeringAttribute,
            &::v1::commonapi::InputStatusStub::getSteeringAttribute,
            &InputStatusStubRemoteEvent::onRemoteSetSteeringAttribute,
            &InputStatusStubRemoteEvent::onRemoteSteeringAttributeChanged,
            &InputStatusStubAdapter::fireSteeringAttributeChanged,
            false,
            _stub->hasElement(1))
        ,
        getThrottleAttributeStubDispatcher(
            &::v1::commonapi::InputStatusStub::lockThrottleAttribute,
            &::v1::commonapi::InputStatusStub::getThrottleAttribute,
            false,
            _stub->hasElement(2)),
        setThrottleAttributeStubDispatcher(
            &::v1::commonapi::InputStatusStub::lockThrottleAttribute,
            &::v1::commonapi::InputStatusStub::getThrottleAttribute,
            &InputStatusStubRemoteEvent::onRemoteSetThrottleAttribute,
            &InputStatusStubRemoteEvent::onRemoteThrottleAttributeChanged,
            &InputStatusStubAdapter::fireThrottleAttributeChanged,
            false,
            _stub->hasElement(2))
    {
        InputStatusSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x1770) }, &getBrakeAttributeStubDispatcher );
        InputStatusSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x1771) }, &setBrakeAttributeStubDispatcher );
        InputStatusSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x1f40) }, &getSteeringAttributeStubDispatcher );
        InputStatusSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x1f41) }, &setSteeringAttributeStubDispatcher );
        InputStatusSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x2328) }, &getThrottleAttributeStubDispatcher );
        InputStatusSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x2329) }, &setThrottleAttributeStubDispatcher );
        std::shared_ptr<CommonAPI::SomeIP::ClientId> itsClient = std::make_shared<CommonAPI::SomeIP::ClientId>(0xFFFF, 0xFFFFFFFF, 0xFFFFFFFF);

        // Provided events/fields
        {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(0x8006));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x8006), itsEventGroups, CommonAPI::SomeIP::event_type_e::ET_EVENT, CommonAPI::SomeIP::reliability_type_e::RT_RELIABLE);
        }
        if (_stub->hasElement(0)) {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(CommonAPI::SomeIP::eventgroup_id_t(0x8124)));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x8124), itsEventGroups, CommonAPI::SomeIP::event_type_e::ET_FIELD, CommonAPI::SomeIP::reliability_type_e::RT_RELIABLE);
            fireBrakeAttributeChanged(std::dynamic_pointer_cast< ::v1::commonapi::InputStatusStub>(_stub)->getBrakeAttribute(itsClient));
        }

        if (_stub->hasElement(1)) {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(CommonAPI::SomeIP::eventgroup_id_t(0x8138)));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x8138), itsEventGroups, CommonAPI::SomeIP::event_type_e::ET_FIELD, CommonAPI::SomeIP::reliability_type_e::RT_RELIABLE);
            fireSteeringAttributeChanged(std::dynamic_pointer_cast< ::v1::commonapi::InputStatusStub>(_stub)->getSteeringAttribute(itsClient));
        }

        if (_stub->hasElement(2)) {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(CommonAPI::SomeIP::eventgroup_id_t(0x8142)));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x8142), itsEventGroups, CommonAPI::SomeIP::event_type_e::ET_FIELD, CommonAPI::SomeIP::reliability_type_e::RT_RELIABLE);
            fireThrottleAttributeChanged(std::dynamic_pointer_cast< ::v1::commonapi::InputStatusStub>(_stub)->getThrottleAttribute(itsClient));
        }

    }

    // Register/Unregister event handlers for selective broadcasts
    void registerSelectiveEventHandlers();
    void unregisterSelectiveEventHandlers();

};

template <typename _Stub, typename... _Stubs>
void InputStatusSomeIPStubAdapterInternal<_Stub, _Stubs...>::fireBrakeAttributeChanged(const bool &_value) {
    CommonAPI::SomeIP::StubEventHelper<
        CommonAPI::SomeIP::SerializableArguments<
            bool
            >
    >::sendEvent(
        *this,
        CommonAPI::SomeIP::event_id_t(0x8124),
        false,
        _value
    );
}

template <typename _Stub, typename... _Stubs>
void InputStatusSomeIPStubAdapterInternal<_Stub, _Stubs...>::fireSteeringAttributeChanged(const float &_value) {
    CommonAPI::SomeIP::StubEventHelper<
        CommonAPI::SomeIP::SerializableArguments<
            float
            >
    >::sendEvent(
        *this,
        CommonAPI::SomeIP::event_id_t(0x8138),
        false,
        _value
    );
}

template <typename _Stub, typename... _Stubs>
void InputStatusSomeIPStubAdapterInternal<_Stub, _Stubs...>::fireThrottleAttributeChanged(const float &_value) {
    CommonAPI::SomeIP::StubEventHelper<
        CommonAPI::SomeIP::SerializableArguments<
            float
            >
    >::sendEvent(
        *this,
        CommonAPI::SomeIP::event_id_t(0x8142),
        false,
        _value
    );
}

template <typename _Stub, typename... _Stubs>
void InputStatusSomeIPStubAdapterInternal<_Stub, _Stubs...>::fireGearSelectEvent(const uint8_t &_setGear) {
    CommonAPI::Deployable< uint8_t, CommonAPI::SomeIP::IntegerDeployment<uint8_t>> deployed_setGear(_setGear, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint8_t>* >(nullptr));
    CommonAPI::SomeIP::StubEventHelper<CommonAPI::SomeIP::SerializableArguments<  CommonAPI::Deployable< uint8_t, CommonAPI::SomeIP::IntegerDeployment<uint8_t> > 
    >>
        ::sendEvent(
            *this,
            CommonAPI::SomeIP::event_id_t(0x8006),
            false,
             deployed_setGear 
    );
}


template <typename _Stub, typename... _Stubs>
void InputStatusSomeIPStubAdapterInternal<_Stub, _Stubs...>::registerSelectiveEventHandlers() {
}

template <typename _Stub, typename... _Stubs>
void InputStatusSomeIPStubAdapterInternal<_Stub, _Stubs...>::unregisterSelectiveEventHandlers() {
}

template <typename _Stub = ::v1::commonapi::InputStatusStub, typename... _Stubs>
class InputStatusSomeIPStubAdapter
    : public InputStatusSomeIPStubAdapterInternal<_Stub, _Stubs...> {
public:
    InputStatusSomeIPStubAdapter(const CommonAPI::SomeIP::Address &_address,
                                            const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                                            const std::shared_ptr<CommonAPI::StubBase> &_stub)
        : CommonAPI::SomeIP::StubAdapter(_address, _connection),
          InputStatusSomeIPStubAdapterInternal<_Stub, _Stubs...>(_address, _connection, _stub) {
    }
};

} // namespace commonapi
} // namespace v1

#endif // V1_COMMONAPI_Input_Status_SOMEIP_STUB_ADAPTER_HPP_
