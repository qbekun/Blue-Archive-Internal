#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::GameData::DAO::Battle { class LogicEffectDAO; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }

#define MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x123CE90)
#define MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_LOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x123CEA0)
#define MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_LOGICEFFECTTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x123CEB0)
#define MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x123CEC0)
#define MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x123CED0)
#define MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_APPLYRATE_OFFSET UNITYSDK_OFFSET(0x123CEE0)
#define MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_COMMONVISUALIDHASH_OFFSET UNITYSDK_OFFSET(0x123CEF0)
#define MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_FORCEFLOATERHIDE_OFFSET UNITYSDK_OFFSET(0x123CF00)
#define MX_LOGIC_DATA_LOGICEFFECTVALUE_SET_FORCEFLOATERHIDE_OFFSET UNITYSDK_OFFSET(0x123CF10)
#define MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_PRIORITYWHENSAMEFRAME_OFFSET UNITYSDK_OFFSET(0x123CF20)
#define MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_CANTARGETTSAINTERACTINGCHARACTER_OFFSET UNITYSDK_OFFSET(0x123CF30)
#define MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_ISDISABLED_OFFSET UNITYSDK_OFFSET(0x123CF40)
#define MX_LOGIC_DATA_LOGICEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12383B0)
#define MX_LOGIC_DATA_LOGICEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123CF90)
#define MX_LOGIC_DATA_LOGICEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12398A0)
#define MX_LOGIC_DATA_LOGICEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123D020)
#define MX_LOGIC_DATA_LOGICEFFECTVALUE_PARSEBASISPOINTSTRING_OFFSET UNITYSDK_OFFSET(0x1238430)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LogicEffectValue_TypeDefinitionIndex = 13906;

	class LogicEffectValue : public Il2CppObject
	{
	public:
		::System::Int32 _Level_k__BackingField; // 0x10
		::System::String* _LogicEffectGroupId_k__BackingField; // 0x18
		::System::String* _LogicEffectTemplateId_k__BackingField; // 0x20
		::FlatData::LogicEffectCategory* _Category_k__BackingField; // 0x28
		::System::Int32 _Channel_k__BackingField; // 0x2C
		::MX::Core::Math::BasisPoint* _ApplyRate_k__BackingField; // 0x30
		::System::UInt32 _CommonVisualIdHash_k__BackingField; // 0x38
		::System::Boolean _ForceFloaterHide_k__BackingField; // 0x3C
		::System::Int32 _PriorityWhenSameFrame_k__BackingField; // 0x40
		::System::Boolean _CanTargetTSAInteractingCharacter_k__BackingField; // 0x44

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::String* get_LogicEffectGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_LOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_LogicEffectTemplateId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_LOGICEFFECTTEMPLATEID_OFFSET))(nullptr);
		}

		::FlatData::LogicEffectCategory* get_Category()
		{
			return ((::FlatData::LogicEffectCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Int32 get_Channel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_CHANNEL_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_ApplyRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_APPLYRATE_OFFSET))(nullptr);
		}

		::System::UInt32 get_CommonVisualIdHash()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_COMMONVISUALIDHASH_OFFSET))(nullptr);
		}

		::System::Boolean get_ForceFloaterHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_FORCEFLOATERHIDE_OFFSET))(nullptr);
		}

		::System::Void set_ForceFloaterHide(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTVALUE_SET_FORCEFLOATERHIDE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PriorityWhenSameFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_PRIORITYWHENSAMEFRAME_OFFSET))(nullptr);
		}

		::System::Boolean get_CanTargetTSAInteractingCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_CANTARGETTSAINTERACTINGCHARACTER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTVALUE_GET_ISDISABLED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::LogicEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::LogicEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::System::String* str2, ::FlatData::LogicEffectCategory* arg2, ::System::Int32 arg3, ::System::UInt32 arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::FlatData::LogicEffectCategory*, ::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTVALUE_.CTOR_OFFSET))(arg, str, str2, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTVALUE_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ParseBasisPointString(::System::String* str)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTVALUE_PARSEBASISPOINTSTRING_OFFSET))(str, nullptr);
		}

	};
}

