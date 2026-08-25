#pragma once
#include "../unitysdk.h"

namespace BoardGame { class BoardGameUpdateData; }

#define BOARDGAME_BOARDGAMEUPDATEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE0B520)
#define BOARDGAME_BOARDGAMEUPDATEDATA_CANCELBOARDUPDATE_OFFSET UNITYSDK_OFFSET(0xE08B80)
#define BOARDGAME_BOARDGAMEUPDATEDATA_GET_ISBOARDUPDATECANCELED_OFFSET UNITYSDK_OFFSET(0xE13AD0)
#define BOARDGAME_BOARDGAMEUPDATEDATA_SET_PREBOARDUPDATES_OFFSET UNITYSDK_OFFSET(0xE13AE0)
#define BOARDGAME_BOARDGAMEUPDATEDATA_SET_ISBOARDUPDATECANCELED_OFFSET UNITYSDK_OFFSET(0xE13AF0)
#define BOARDGAME_BOARDGAMEUPDATEDATA_ADDPREBOARDUPDATE_OFFSET UNITYSDK_OFFSET(0xE096B0)
#define BOARDGAME_BOARDGAMEUPDATEDATA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xE13B00)
#define BOARDGAME_BOARDGAMEUPDATEDATA_SET_POSTBOARDUPDATES_OFFSET UNITYSDK_OFFSET(0xE13B10)
#define BOARDGAME_BOARDGAMEUPDATEDATA_GET_PREBOARDUPDATES_OFFSET UNITYSDK_OFFSET(0xE13B20)
#define BOARDGAME_BOARDGAMEUPDATEDATA_ADDPOSTBOARDUPDATE_OFFSET UNITYSDK_OFFSET(0xE13B30)
#define BOARDGAME_BOARDGAMEUPDATEDATA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xE13BE0)
#define BOARDGAME_BOARDGAMEUPDATEDATA_SET_ENDUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0xE13BF0)
#define BOARDGAME_BOARDGAMEUPDATEDATA_GET_ENDUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0xE13C00)
#define BOARDGAME_BOARDGAMEUPDATEDATA_GET_POSTBOARDUPDATES_OFFSET UNITYSDK_OFFSET(0xE13C10)

namespace BoardGame
{
	inline static constexpr unsigned int BoardGameUpdateData_TypeDefinitionIndex = 10309;

	class BoardGameUpdateData : public Il2CppObject
	{
	public:
		::System::Boolean _IsBoardUpdateCanceled_k__BackingField; // 0x10
		::System::Int64 _EventContentId_k__BackingField; // 0x18
		Il2CppObject* _PreBoardUpdates_k__BackingField; // 0x20
		Il2CppObject* _PostBoardUpdates_k__BackingField; // 0x28
		::System::Action* _EndUpdateCallback_k__BackingField; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEUPDATEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CancelBoardUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEUPDATEDATA_CANCELBOARDUPDATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBoardUpdateCanceled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEUPDATEDATA_GET_ISBOARDUPDATECANCELED_OFFSET))(nullptr);
		}

		::System::Void set_PreBoardUpdates(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEUPDATEDATA_SET_PREBOARDUPDATES_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsBoardUpdateCanceled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEUPDATEDATA_SET_ISBOARDUPDATECANCELED_OFFSET))(arg, nullptr);
		}

		::System::Void AddPreBoardUpdate(::BoardGame::BoardGameUpdateData* arg)
		{
			((::System::Void(*)(::BoardGame::BoardGameUpdateData*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEUPDATEDATA_ADDPREBOARDUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEUPDATEDATA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_PostBoardUpdates(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEUPDATEDATA_SET_POSTBOARDUPDATES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PreBoardUpdates()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEUPDATEDATA_GET_PREBOARDUPDATES_OFFSET))(nullptr);
		}

		::System::Void AddPostBoardUpdate(::BoardGame::BoardGameUpdateData* arg)
		{
			((::System::Void(*)(::BoardGame::BoardGameUpdateData*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEUPDATEDATA_ADDPOSTBOARDUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEUPDATEDATA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EndUpdateCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEUPDATEDATA_SET_ENDUPDATECALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Action* get_EndUpdateCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEUPDATEDATA_GET_ENDUPDATECALLBACK_OFFSET))(nullptr);
		}

		Il2CppObject* get_PostBoardUpdates()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEUPDATEDATA_GET_POSTBOARDUPDATES_OFFSET))(nullptr);
		}

	};
}

