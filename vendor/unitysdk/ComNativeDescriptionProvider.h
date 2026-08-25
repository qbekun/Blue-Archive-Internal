#pragma once
#include "unitysdk.h"

#define COMNATIVEDESCRIPTIONPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B65E00)
#define COMNATIVEDESCRIPTIONPROVIDER_GET_HANDLER_OFFSET UNITYSDK_OFFSET(0x9B75300)
#define COMNATIVEDESCRIPTIONPROVIDER_SET_HANDLER_OFFSET UNITYSDK_OFFSET(0x9B75310)
#define COMNATIVEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x9B75320)

	inline static constexpr unsigned int ComNativeDescriptionProvider_TypeDefinitionIndex = 29516;

	class ComNativeDescriptionProvider : public Il2CppObject
	{
	public:
		::System::ComponentModel::IComNativeDescriptorHandler* _handler; // 0x20

		::System::Void .ctor(::System::ComponentModel::IComNativeDescriptorHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::IComNativeDescriptorHandler*, ::PVOID))((::PBYTE)hIl2Cpp + COMNATIVEDESCRIPTIONPROVIDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::IComNativeDescriptorHandler* get_Handler()
		{
			return (return (::System::ComponentModel::IComNativeDescriptorHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMNATIVEDESCRIPTIONPROVIDER_GET_HANDLER_OFFSET))(nullptr);
		}

		::System::Void set_Handler(::System::ComponentModel::IComNativeDescriptorHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::IComNativeDescriptorHandler*, ::PVOID))((::PBYTE)hIl2Cpp + COMNATIVEDESCRIPTIONPROVIDER_SET_HANDLER_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::ComponentModel::ICustomTypeDescriptor*(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + COMNATIVEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET))(arg, arg, nullptr);
		}

	};

