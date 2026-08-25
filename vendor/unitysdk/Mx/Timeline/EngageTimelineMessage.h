#pragma once
#include "../../unitysdk.h"

#define MX_TIMELINE_ENGAGETIMELINEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE21E00)
#define MX_TIMELINE_ENGAGETIMELINEMESSAGE_SET_ISSETTRANSFORMPARENT_OFFSET UNITYSDK_OFFSET(0xE21F90)
#define MX_TIMELINE_ENGAGETIMELINEMESSAGE_SET_BATTLESTARTACTION_OFFSET UNITYSDK_OFFSET(0xE21FA0)
#define MX_TIMELINE_ENGAGETIMELINEMESSAGE_GET_BATTLESTARTACTION_OFFSET UNITYSDK_OFFSET(0xE21FB0)
#define MX_TIMELINE_ENGAGETIMELINEMESSAGE_GET_ISSETTRANSFORMPARENT_OFFSET UNITYSDK_OFFSET(0xE21FC0)

namespace Mx::Timeline
{
	inline static constexpr unsigned int EngageTimelineMessage_TypeDefinitionIndex = 10367;

	class EngageTimelineMessage : public Il2CppObject
	{
	public:
		Il2CppObject* _BattleStartAction_k__BackingField; // 0x40
		::System::Boolean _IsSetTransformParent_k__BackingField; // 0x48

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::Boolean arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, ::System::Boolean arg7)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_ENGAGETIMELINEMESSAGE_.CTOR_OFFSET))(str, arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void set_IsSetTransformParent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_ENGAGETIMELINEMESSAGE_SET_ISSETTRANSFORMPARENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_BattleStartAction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_ENGAGETIMELINEMESSAGE_SET_BATTLESTARTACTION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_BattleStartAction()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_ENGAGETIMELINEMESSAGE_GET_BATTLESTARTACTION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSetTransformParent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_ENGAGETIMELINEMESSAGE_GET_ISSETTRANSFORMPARENT_OFFSET))(nullptr);
		}

	};
}

