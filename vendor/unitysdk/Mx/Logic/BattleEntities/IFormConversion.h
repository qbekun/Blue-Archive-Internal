#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class FormConversionInfo; }
namespace MX::Data { class CharacterSkillListKey; }
namespace MX::Logic::BattleEntities { class LogicEffectEndCondition; }

#define MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_SET_CURRENTFORM_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_REQUESTDEFAULTFORMCONVERSIONIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_GET_FORMTOCONVERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_REQUESTDEFAULTFORMCONVERSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_GET_CURRENTFORM_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_SET_FORMTOCONVERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_GET_REQUIRERELEASEFORMCONVERSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_GET_SKILLLISTKEY_OFFSET UNITYSDK_OFFSET(0x113AB00)
#define MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_ADD_FORMCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_SET_FORMCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_GET_FORMINDEX_OFFSET UNITYSDK_OFFSET(0x113ABD0)
#define MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_GET_ISFORMCONVERSED_OFFSET UNITYSDK_OFFSET(0x113AC70)
#define MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_REQUESTFORMCONVERSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_GET_FORMCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_REMOVE_FORMCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int IFormConversion_TypeDefinitionIndex = 13093;

	class IFormConversion : public Il2CppObject
	{
	public:
		::System::Void set_CurrentForm(::MX::Logic::BattleEntities::FormConversionInfo* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::FormConversionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_SET_CURRENTFORM_OFFSET))(arg, nullptr);
		}

		::System::Void RequestDefaultFormConversionImmediately(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_REQUESTDEFAULTFORMCONVERSIONIMMEDIATELY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::FormConversionInfo* get_FormToConvert()
		{
			return ((::MX::Logic::BattleEntities::FormConversionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_GET_FORMTOCONVERT_OFFSET))(nullptr);
		}

		::System::Void RequestDefaultFormConversion(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_REQUESTDEFAULTFORMCONVERSION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::FormConversionInfo* get_CurrentForm()
		{
			return ((::MX::Logic::BattleEntities::FormConversionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_GET_CURRENTFORM_OFFSET))(nullptr);
		}

		::System::Void set_FormToConvert(::MX::Logic::BattleEntities::FormConversionInfo* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::FormConversionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_SET_FORMTOCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_RequireReleaseFormConversion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_GET_REQUIRERELEASEFORMCONVERSION_OFFSET))(nullptr);
		}

		::MX::Data::CharacterSkillListKey* get_SkillListKey()
		{
			return ((::MX::Data::CharacterSkillListKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_GET_SKILLLISTKEY_OFFSET))(nullptr);
		}

		::System::Void add_FormChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_ADD_FORMCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void set_FormCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_SET_FORMCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FormIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_GET_FORMINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFormConversed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_GET_ISFORMCONVERSED_OFFSET))(nullptr);
		}

		::System::Void RequestFormConversion(Il2CppObject* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Boolean arg4, ::System::Int32 arg5, ::MX::Logic::BattleEntities::LogicEffectEndCondition* arg6, ::System::Int32 arg7, ::System::Boolean arg8, ::System::Boolean arg9, ::System::Boolean arg10, ::System::Boolean arg11)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::MX::Logic::BattleEntities::LogicEffectEndCondition*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_REQUESTFORMCONVERSION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, nullptr);
		}

		::System::Int32 get_FormCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_GET_FORMCOUNT_OFFSET))(nullptr);
		}

		::System::Void remove_FormChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IFORMCONVERSION_REMOVE_FORMCHANGED_OFFSET))(arg, nullptr);
		}

	};
}

