#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_POPUPMESSAGEWATCHEDONCE_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D27F80)
#define MX_SAVEDATA_POPUPMESSAGEWATCHEDONCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D27FD0)
#define MX_SAVEDATA_POPUPMESSAGEWATCHEDONCE_HASWATCHED_OFFSET UNITYSDK_OFFSET(0x1D27FE0)
#define MX_SAVEDATA_POPUPMESSAGEWATCHEDONCE_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D28000)
#define MX_SAVEDATA_POPUPMESSAGEWATCHEDONCE_SETCURRENTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D28010)
#define MX_SAVEDATA_POPUPMESSAGEWATCHEDONCE_CLONE_OFFSET UNITYSDK_OFFSET(0x1D28020)

namespace MX::SaveData
{
	inline static constexpr unsigned int PopupMessageWatchedOnce_TypeDefinitionIndex = 20012;

	class PopupMessageWatchedOnce : public Il2CppObject
	{
	public:
		::System::String* currentMessage; // 0x10

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_POPUPMESSAGEWATCHEDONCE_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_POPUPMESSAGEWATCHEDONCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HasWatched(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_POPUPMESSAGEWATCHEDONCE_HASWATCHED_OFFSET))(str, nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_POPUPMESSAGEWATCHEDONCE_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetCurrentMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_POPUPMESSAGEWATCHEDONCE_SETCURRENTMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_POPUPMESSAGEWATCHEDONCE_CLONE_OFFSET))(nullptr);
		}

	};
}

