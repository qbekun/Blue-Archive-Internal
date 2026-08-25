#pragma once
#include "unitysdk.h"

#define CLOSEFAVORDIRECTINGMESSAGE_SET_DELAY_OFFSET UNITYSDK_OFFSET(0x22E0740)
#define CLOSEFAVORDIRECTINGMESSAGE_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x22E0750)
#define CLOSEFAVORDIRECTINGMESSAGE_SET_SERVERIDS_OFFSET UNITYSDK_OFFSET(0x22E0760)
#define CLOSEFAVORDIRECTINGMESSAGE_GET_SERVERIDS_OFFSET UNITYSDK_OFFSET(0x22E0770)
#define CLOSEFAVORDIRECTINGMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22E0780)

	inline static constexpr unsigned int CloseFavorDirectingMessage_TypeDefinitionIndex = 4856;

	class CloseFavorDirectingMessage : public ::TriInspector::TitleAttribute
	{
	public:
		Il2CppObject* _ServerIds_k__BackingField; // 0x18
		::System::Single _Delay_k__BackingField; // 0x20

		::System::Void set_Delay(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEFAVORDIRECTINGMESSAGE_SET_DELAY_OFFSET))(arg, nullptr);
		}

		::System::Single get_Delay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEFAVORDIRECTINGMESSAGE_GET_DELAY_OFFSET))(nullptr);
		}

		::System::Void set_ServerIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEFAVORDIRECTINGMESSAGE_SET_SERVERIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEFAVORDIRECTINGMESSAGE_GET_SERVERIDS_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Single arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEFAVORDIRECTINGMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

