#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class EchelonDB; }
class EchelonSlots;
class EchelonObject;

#define SAVEECHELONDBHELPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x24D93B0)
#define SAVEECHELONDBHELPER_NEWECHELONDBFROMCURRENTFORMATION_OFFSET UNITYSDK_OFFSET(0x24D9520)
#define SAVEECHELONDBHELPER_NEWECHELONDBFROMCURRENTFORMATION_OFFSET UNITYSDK_OFFSET(0x24D9960)
#define SAVEECHELONDBHELPER_REMOVEASSISTCHARACTERS_OFFSET UNITYSDK_OFFSET(0x24DA290)
#define SAVEECHELONDBHELPER_RESTOREASSISTCHARACTERS_OFFSET UNITYSDK_OFFSET(0x24DA8A0)

	inline static constexpr unsigned int SaveEchelonDBHelper_TypeDefinitionIndex = 5974;

	class SaveEchelonDBHelper : public Il2CppObject
	{
	public:
		Il2CppObject* AssistInfos; // 0x10
		::MX::GameLogic::DBModel::EchelonDB* newEchelonDB; // 0x18
		Il2CppObject* assistMainIds; // 0x20
		Il2CppObject* assistSupportIds; // 0x28
		Il2CppObject* originalMulliganUniqueIds; // 0x30

		::System::Void .ctor(::MX::GameLogic::DBModel::EchelonDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + SAVEECHELONDBHELPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EchelonDB* NewEchelonDBFromCurrentFormation(Il2CppObject* arg, EchelonSlots* arg2)
		{
			return ((::MX::GameLogic::DBModel::EchelonDB*(*)(Il2CppObject*, EchelonSlots*, ::PVOID))((::PBYTE)hIl2Cpp + SAVEECHELONDBHELPER_NEWECHELONDBFROMCURRENTFORMATION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::EchelonDB* NewEchelonDBFromCurrentFormation(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg2, ::Il2CppArray<::System::Object*>* arg3, ::System::Int64 arg4)
		{
			return ((::MX::GameLogic::DBModel::EchelonDB*(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SAVEECHELONDBHELPER_NEWECHELONDBFROMCURRENTFORMATION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void RemoveAssistCharacters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SAVEECHELONDBHELPER_REMOVEASSISTCHARACTERS_OFFSET))(nullptr);
		}

		::System::Void RestoreAssistCharacters(EchelonObject* arg)
		{
			((::System::Void(*)(EchelonObject*, ::PVOID))((::PBYTE)hIl2Cpp + SAVEECHELONDBHELPER_RESTOREASSISTCHARACTERS_OFFSET))(arg, nullptr);
		}

	};

