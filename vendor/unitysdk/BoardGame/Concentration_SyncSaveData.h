#pragma once
#include "../unitysdk.h"

#define BOARDGAME_CONCENTRATION_SYNCSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE0B690)
#define BOARDGAME_CONCENTRATION_SYNCSAVEDATA_SET_ISRESET_OFFSET UNITYSDK_OFFSET(0xE0B6A0)
#define BOARDGAME_CONCENTRATION_SYNCSAVEDATA_GET_ISRESET_OFFSET UNITYSDK_OFFSET(0xE0B6B0)
#define BOARDGAME_CONCENTRATION_SYNCSAVEDATA_SET_CARDS_OFFSET UNITYSDK_OFFSET(0xE0B6C0)
#define BOARDGAME_CONCENTRATION_SYNCSAVEDATA_SET_ISFIRSTENTRY_OFFSET UNITYSDK_OFFSET(0xE0B6D0)
#define BOARDGAME_CONCENTRATION_SYNCSAVEDATA_GET_ISFIRSTENTRY_OFFSET UNITYSDK_OFFSET(0xE0B6E0)
#define BOARDGAME_CONCENTRATION_SYNCSAVEDATA_SET_ISSEASONFIRSTENTRY_OFFSET UNITYSDK_OFFSET(0xE0B6F0)
#define BOARDGAME_CONCENTRATION_SYNCSAVEDATA_GET_ISSEASONFIRSTENTRY_OFFSET UNITYSDK_OFFSET(0xE0B700)
#define BOARDGAME_CONCENTRATION_SYNCSAVEDATA_GET_CARDS_OFFSET UNITYSDK_OFFSET(0xE0B710)

namespace BoardGame
{
	inline static constexpr unsigned int Concentration_SyncSaveData_TypeDefinitionIndex = 10271;

	class Concentration_SyncSaveData : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _Cards_k__BackingField; // 0x38
		::System::Boolean _IsSeasonFirstEntry_k__BackingField; // 0x40
		::System::Boolean _IsFirstEntry_k__BackingField; // 0x41
		::System::Boolean _IsReset_k__BackingField; // 0x42

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_SYNCSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsReset(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_SYNCSAVEDATA_SET_ISRESET_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_SYNCSAVEDATA_GET_ISRESET_OFFSET))(nullptr);
		}

		::System::Void set_Cards(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_SYNCSAVEDATA_SET_CARDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsFirstEntry(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_SYNCSAVEDATA_SET_ISFIRSTENTRY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFirstEntry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_SYNCSAVEDATA_GET_ISFIRSTENTRY_OFFSET))(nullptr);
		}

		::System::Void set_IsSeasonFirstEntry(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_SYNCSAVEDATA_SET_ISSEASONFIRSTENTRY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSeasonFirstEntry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_SYNCSAVEDATA_GET_ISSEASONFIRSTENTRY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Cards()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_SYNCSAVEDATA_GET_CARDS_OFFSET))(nullptr);
		}

	};
}

