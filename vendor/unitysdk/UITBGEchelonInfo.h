#pragma once
#include "unitysdk.h"

#define UITBGECHELONINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB537E0)
#define UITBGECHELONINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB53860)
#define UITBGECHELONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xB53E10)
#define UITBGECHELONINFO_PLAYRECOVERY_OFFSET UNITYSDK_OFFSET(0xB53E20)
#define UITBGECHELONINFO_COPLAYPLAYRECOVERY_OFFSET UNITYSDK_OFFSET(0xB53EF0)
#define UITBGECHELONINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0xB53F80)

	inline static constexpr unsigned int UITBGEchelonInfo_TypeDefinitionIndex = 8381;

	class UITBGEchelonInfo : public Il2CppObject
	{
	public:
		Il2CppObject* CharacterInfos; // 0x18
		::Il2CppArray<::System::Object*>* RecoveryFxs; // 0x20
		::System::Boolean isPlayingFx; // 0x28

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGECHELONINFO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGECHELONINFO_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGECHELONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayRecovery()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGECHELONINFO_PLAYRECOVERY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayPlayRecovery()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGECHELONINFO_COPLAYPLAYRECOVERY_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGECHELONINFO_REFRESH_OFFSET))(nullptr);
		}

	};

