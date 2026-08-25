#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class LogicEffectData; }
namespace MX::GameData::Repository { class LogicEffectContainer; }

#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTCONTAINER_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FC040)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTCONTAINER_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FC090)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTCONTAINER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FC120)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTCONTAINER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17FC170)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTCONTAINER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17FC1C0)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17FC210)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int LogicEffectContainer_TypeDefinitionIndex = 15670;

	class LogicEffectContainer : public Il2CppObject
	{
	public:
		::System::String* StringId; // 0x10
		::System::String* GroupId; // 0x18
		::System::String* TemplateId; // 0x20
		::System::Int32 Level; // 0x28
		::System::Int64 ApplyRate; // 0x30
		::MX::Logic::Data::LogicEffectData* EffectData; // 0x38

		::System::Boolean Equals(::MX::GameData::Repository::LogicEffectContainer* arg)
		{
			return (return (::System::Boolean(*)(::MX::GameData::Repository::LogicEffectContainer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTCONTAINER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTCONTAINER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTCONTAINER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::GameData::Repository::LogicEffectContainer* arg, ::MX::GameData::Repository::LogicEffectContainer* arg)
		{
			return (return (::System::Boolean(*)(::MX::GameData::Repository::LogicEffectContainer*, ::MX::GameData::Repository::LogicEffectContainer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTCONTAINER_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::MX::GameData::Repository::LogicEffectContainer* arg, ::MX::GameData::Repository::LogicEffectContainer* arg)
		{
			return (return (::System::Boolean(*)(::MX::GameData::Repository::LogicEffectContainer*, ::MX::GameData::Repository::LogicEffectContainer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTCONTAINER_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTCONTAINER_.CTOR_OFFSET))(nullptr);
		}

	};
}

