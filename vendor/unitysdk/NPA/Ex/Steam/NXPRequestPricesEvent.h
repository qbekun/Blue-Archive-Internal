#pragma once
#include "../../../unitysdk.h"

#define NPA_EX_STEAM_NXPREQUESTPRICESEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2BC90)
#define NPA_EX_STEAM_NXPREQUESTPRICESEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D2BD60)
#define NPA_EX_STEAM_NXPREQUESTPRICESEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D2BD70)
#define NPA_EX_STEAM_NXPREQUESTPRICESEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D2BDF0)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPRequestPricesEvent_TypeDefinitionIndex = 26047;

	class NXPRequestPricesEvent : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPREQUESTPRICESEVENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPREQUESTPRICESEVENT_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Boolean, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPREQUESTPRICESEVENT_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPREQUESTPRICESEVENT_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

