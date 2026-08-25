#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Schema { class ValidationEventArgs; }

#define NEWTONSOFT_JSON_SCHEMA_VALIDATIONEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94E88B0)
#define NEWTONSOFT_JSON_SCHEMA_VALIDATIONEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x94F5700)
#define NEWTONSOFT_JSON_SCHEMA_VALIDATIONEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x94F5710)
#define NEWTONSOFT_JSON_SCHEMA_VALIDATIONEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x94F5750)

namespace Newtonsoft::Json::Schema
{
	inline static constexpr unsigned int ValidationEventHandler_TypeDefinitionIndex = 31998;

	class ValidationEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_VALIDATIONEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::Newtonsoft::Json::Schema::ValidationEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::Newtonsoft::Json::Schema::ValidationEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_VALIDATIONEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::Newtonsoft::Json::Schema::ValidationEventArgs* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::Newtonsoft::Json::Schema::ValidationEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_VALIDATIONEVENTHANDLER_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_VALIDATIONEVENTHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

