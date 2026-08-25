#pragma once
#include "unitysdk.h"

#define COMBATSTYLECHANGEDMESSAGE_GET_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x10BF6A0)
#define COMBATSTYLECHANGEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x10BD740)
#define COMBATSTYLECHANGEDMESSAGE_GET_CHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x10BF6B0)
#define COMBATSTYLECHANGEDMESSAGE_SET_CHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x10BF6C0)
#define COMBATSTYLECHANGEDMESSAGE_SET_STYLEINDEX_OFFSET UNITYSDK_OFFSET(0x10BF6D0)
#define COMBATSTYLECHANGEDMESSAGE_SET_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x10BF6E0)
#define COMBATSTYLECHANGEDMESSAGE_GET_STYLEINDEX_OFFSET UNITYSDK_OFFSET(0x10BF6F0)

	inline static constexpr unsigned int CombatStyleChangedMessage_TypeDefinitionIndex = 936;

	class CombatStyleChangedMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _CharacterUniqueId_k__BackingField; // 0x18
		::System::Int32 _StyleIndex_k__BackingField; // 0x20
		::System::Boolean _PlayAnimation_k__BackingField; // 0x24

		::System::Boolean get_PlayAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEDMESSAGE_GET_PLAYANIMATION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEDMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 get_CharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEDMESSAGE_GET_CHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEDMESSAGE_SET_CHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_StyleIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEDMESSAGE_SET_STYLEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_PlayAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEDMESSAGE_SET_PLAYANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StyleIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEDMESSAGE_GET_STYLEINDEX_OFFSET))(nullptr);
		}

	};

