#pragma once
#include "unitysdk.h"

class OperatorType;
class SoP;
namespace MX::MinigameRhythm { class MinigameRhythmLogicManager; }

#define MINIGAMEEVENTHANDLER_GAMESTATECONDITIONCHECKER_OFFSET UNITYSDK_OFFSET(0xD135E0)
#define MINIGAMEEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD138B0)
#define MINIGAMEEVENTHANDLER_GETCONDITIONCOMMANDLIST_OFFSET UNITYSDK_OFFSET(0xD138C0)
#define MINIGAMEEVENTHANDLER_EXECUTECOMMAND_OFFSET UNITYSDK_OFFSET(0xD13840)
#define MINIGAMEEVENTHANDLER_START_OFFSET UNITYSDK_OFFSET(0xD139B0)

	inline static constexpr unsigned int MinigameEventHandler_TypeDefinitionIndex = 651;

	class MinigameEventHandler : public Il2CppObject
	{
	public:
		OperatorType* Operator; // 0x18
		SoP* SingleOrPersistent; // 0x1C
		::MX::MinigameRhythm::MinigameRhythmLogicManager* logicManager; // 0x20
		::Il2CppArray<::System::Object*>* conditions; // 0x28
		::Il2CppArray<::System::Object*>* commands; // 0x30
		::System::Boolean singleEventHappened; // 0x38
		::System::Boolean isConditionQualified; // 0x39

		::System::Void GameStateConditionChecker()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEEVENTHANDLER_GAMESTATECONDITIONCHECKER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEEVENTHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void GetConditionCommandList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEEVENTHANDLER_GETCONDITIONCOMMANDLIST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ExecuteCommand()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEEVENTHANDLER_EXECUTECOMMAND_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEEVENTHANDLER_START_OFFSET))(nullptr);
		}

	};

