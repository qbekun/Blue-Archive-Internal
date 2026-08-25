#pragma once
#include "unitysdk.h"

#define RAIDLISTSCOLLVIEWCONTROLLER_CHECKUNLOCK_OFFSET UNITYSDK_OFFSET(0x2785D40)
#define RAIDLISTSCOLLVIEWCONTROLLER_WAITANDUNLOCK_OFFSET UNITYSDK_OFFSET(0x27866D0)
#define RAIDLISTSCOLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27867E0)
#define RAIDLISTSCOLLVIEWCONTROLLER_WAITANDMOVEMAXDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x2786740)

	inline static constexpr unsigned int RaidListScollViewController_TypeDefinitionIndex = 7402;

	class RaidListScollViewController : public ::System::Xml::XmlDocument
	{
	public:
		Il2CppObject* unlockIndexList; // 0x90

		::System::Void CheckUnlock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDLISTSCOLLVIEWCONTROLLER_CHECKUNLOCK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* WaitAndUnlock()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDLISTSCOLLVIEWCONTROLLER_WAITANDUNLOCK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDLISTSCOLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* WaitAndMoveMaxDifficulty(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RAIDLISTSCOLLVIEWCONTROLLER_WAITANDMOVEMAXDIFFICULTY_OFFSET))(arg, nullptr);
		}

	};

