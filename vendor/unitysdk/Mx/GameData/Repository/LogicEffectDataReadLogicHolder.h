#pragma once
#include "../../../unitysdk.h"

#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREADLOGICHOLDER_LOADINTERMEDIATEEFFECTS_OFFSET UNITYSDK_OFFSET(0x17F8BA0)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREADLOGICHOLDER_CREATELOGICEFFECTTABLE_OFFSET UNITYSDK_OFFSET(0x17F8C90)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int LogicEffectDataReadLogicHolder_TypeDefinitionIndex = 15651;

	class LogicEffectDataReadLogicHolder : public Il2CppObject
	{
	public:
		Il2CppObject* LoadIntermediateEffects(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREADLOGICHOLDER_LOADINTERMEDIATEEFFECTS_OFFSET))(str, nullptr);
		}

		Il2CppObject* CreateLogicEffectTable(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREADLOGICHOLDER_CREATELOGICEFFECTTABLE_OFFSET))(arg, nullptr);
		}

	};
}

