#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94BD780)
#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x94C9730)
#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x94C9740)
#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x94C9770)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ExtensionDataGetter_TypeDefinitionIndex = 31938;

	class ExtensionDataGetter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Invoke(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (Il2CppObject*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

