#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json::Linq { class JValue; }

#define JVALUEDYNAMICPROXY_TRYCONVERT_OFFSET UNITYSDK_OFFSET(0x951F470)
#define JVALUEDYNAMICPROXY_TRYBINARYOPERATION_OFFSET UNITYSDK_OFFSET(0x951F630)
#define JVALUEDYNAMICPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x951EE20)

	inline static constexpr unsigned int JValueDynamicProxy_TypeDefinitionIndex = 32054;

	class JValueDynamicProxy : public ::MX::NetworkProtocol::RaidGiveUpResponse
	{
	public:
		::System::Boolean TryConvert(::Newtonsoft::Json::Linq::JValue* arg, ::System::Dynamic::ConvertBinder* arg, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JValue*, ::System::Dynamic::ConvertBinder*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + JVALUEDYNAMICPROXY_TRYCONVERT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryBinaryOperation(::Newtonsoft::Json::Linq::JValue* arg, ::System::Dynamic::BinaryOperationBinder* arg, ::System::Object* arg, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JValue*, ::System::Dynamic::BinaryOperationBinder*, ::System::Object*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + JVALUEDYNAMICPROXY_TRYBINARYOPERATION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JVALUEDYNAMICPROXY_.CTOR_OFFSET))(nullptr);
		}

	};

