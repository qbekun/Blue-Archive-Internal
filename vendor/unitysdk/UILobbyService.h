#pragma once
#include "unitysdk.h"

class LobbySpineLoadInfo;
class UILobbyContainer;
namespace MX::Data::Excel { class MemoryLobbyExcel; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define UILOBBYSERVICE_MEMORIALLOBBYSPINECOUNT_OFFSET UNITYSDK_OFFSET(0x1FDEF20)
#define UILOBBYSERVICE_COMMONLOBBYSPINECOUNT_OFFSET UNITYSDK_OFFSET(0x1FDEFE0)
#define UILOBBYSERVICE_CREATELOBBYSPINELOADINFO_OFFSET UNITYSDK_OFFSET(0x1FDF100)
#define UILOBBYSERVICE_CANDIRECTPLAYLOBBYANIMATION_OFFSET UNITYSDK_OFFSET(0x1FDF790)
#define UILOBBYSERVICE_TRYGETMEMORYLOBBYEXCELBYINDEX_OFFSET UNITYSDK_OFFSET(0x1FDF1C0)
#define UILOBBYSERVICE_CANOPENBATTLEPASSNOTICE_OFFSET UNITYSDK_OFFSET(0x1FDF9B0)
#define UILOBBYSERVICE_CANOPENNOTICE_OFFSET UNITYSDK_OFFSET(0x1FDFA90)
#define UILOBBYSERVICE_COMMONLOBBYSPINELOADINFO_OFFSET UNITYSDK_OFFSET(0x1FDF540)
#define UILOBBYSERVICE_REGISTUSEDMEMORYLOBBYPATH_OFFSET UNITYSDK_OFFSET(0x1FDFBE0)
#define UILOBBYSERVICE_ROTATELOBBYSPINELOADINFO_OFFSET UNITYSDK_OFFSET(0x1FDFCE0)
#define UILOBBYSERVICE_LOBBYSPINECOUNT_OFFSET UNITYSDK_OFFSET(0x1FE0050)
#define UILOBBYSERVICE_MEMORYLOBBYSPINELOADINFO_OFFSET UNITYSDK_OFFSET(0x1FDF330)
#define UILOBBYSERVICE_RELEASEUSEDMEMORYLOBBYOBJECT_OFFSET UNITYSDK_OFFSET(0x1FE0140)
#define UILOBBYSERVICE_DEFAULTLOBBYSPINELOADINFO_OFFSET UNITYSDK_OFFSET(0x1FE0440)
#define UILOBBYSERVICE_CANOPENREPURCHASE_OFFSET UNITYSDK_OFFSET(0x1FE09B0)
#define UILOBBYSERVICE_CANOPENSHORTEXPIRATIONCURRENCY_OFFSET UNITYSDK_OFFSET(0x1FE0A90)
#define UILOBBYSERVICE_ROTATELOBBYSPINEINDEX_OFFSET UNITYSDK_OFFSET(0x1FDFE50)
#define UILOBBYSERVICE_RANDOMLOBBYSPINELOADINFO_OFFSET UNITYSDK_OFFSET(0x1FE06E0)
#define UILOBBYSERVICE_ISDAY_OFFSET UNITYSDK_OFFSET(0x1FE0BC0)
#define UILOBBYSERVICE_CANROTATELOBBYSPINE_OFFSET UNITYSDK_OFFSET(0x1FE0B70)
#define UILOBBYSERVICE__COMMONLOBBYSPINELOADINFO_G__GETLOBBYCOMMONPATH|13_0_OFFSET UNITYSDK_OFFSET(0x1FDFB70)
#define UILOBBYSERVICE_SETFIRSTSPINETRACKMIXVALUE_OFFSET UNITYSDK_OFFSET(0x1FE0D30)
#define UILOBBYSERVICE_CANPLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0x1FDF840)
#define UILOBBYSERVICE_PREVLOBBYSPINELOADINFO_OFFSET UNITYSDK_OFFSET(0x1FE1520)
#define UILOBBYSERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE1680)
#define UILOBBYSERVICE_CANOPENSHORTEXPIRATIONITEM_OFFSET UNITYSDK_OFFSET(0x1FE1710)
#define UILOBBYSERVICE_NEXTLOBBYSPINELOADINFO_OFFSET UNITYSDK_OFFSET(0x1FE17F0)
#define UILOBBYSERVICE_PLAYTIMELINEIFAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1FE1950)

	inline static constexpr unsigned int UILobbyService_TypeDefinitionIndex = 3061;

	class UILobbyService : public Il2CppObject
	{
	public:
		Il2CppObject* MemoryLobbyPrefabDic; // 0x0

		::System::Int32 MemorialLobbySpineCount(::System::Int64 arg)
		{
			return ((::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_MEMORIALLOBBYSPINECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 CommonLobbySpineCount(::System::Int64 arg)
		{
			return ((::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_COMMONLOBBYSPINECOUNT_OFFSET))(arg, nullptr);
		}

		LobbySpineLoadInfo* CreateLobbySpineLoadInfo(::System::Int64 arg, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			return ((LobbySpineLoadInfo*(*)(::System::Int64, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_CREATELOBBYSPINELOADINFO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CanDirectPlayLobbyAnimation(LobbySpineLoadInfo* arg, LobbySpineLoadInfo* arg2, UILobbyContainer* arg3, ::System::Boolean arg4)
		{
			return ((::System::Boolean(*)(LobbySpineLoadInfo*, LobbySpineLoadInfo*, UILobbyContainer*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_CANDIRECTPLAYLOBBYANIMATION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean TryGetMemoryLobbyExcelByIndex(::System::Int64 arg, ::System::Int32 arg2, ::MX::Data::Excel::MemoryLobbyExcel&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int32, ::MX::Data::Excel::MemoryLobbyExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_TRYGETMEMORYLOBBYEXCELBYINDEX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CanOpenBattlePassNotice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_CANOPENBATTLEPASSNOTICE_OFFSET))(nullptr);
		}

		::System::Boolean CanOpenNotice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_CANOPENNOTICE_OFFSET))(nullptr);
		}

		LobbySpineLoadInfo* CommonLobbySpineLoadInfo(::System::Int64 arg, ::System::Int32 arg2)
		{
			return ((LobbySpineLoadInfo*(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_COMMONLOBBYSPINELOADINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegistUsedMemoryLobbyPath(::System::Int64 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_REGISTUSEDMEMORYLOBBYPATH_OFFSET))(arg, str, nullptr);
		}

		LobbySpineLoadInfo* RotateLobbySpineLoadInfo()
		{
			return ((LobbySpineLoadInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_ROTATELOBBYSPINELOADINFO_OFFSET))(nullptr);
		}

		::System::Int32 LobbySpineCount(::System::Int64 arg)
		{
			return ((::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_LOBBYSPINECOUNT_OFFSET))(arg, nullptr);
		}

		LobbySpineLoadInfo* MemoryLobbySpineLoadInfo(::MX::Data::Excel::MemoryLobbyExcel* arg, ::System::Int32 arg2)
		{
			return ((LobbySpineLoadInfo*(*)(::MX::Data::Excel::MemoryLobbyExcel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_MEMORYLOBBYSPINELOADINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ReleaseUsedMemoryLobbyObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_RELEASEUSEDMEMORYLOBBYOBJECT_OFFSET))(nullptr);
		}

		LobbySpineLoadInfo* DefaultLobbySpineLoadInfo()
		{
			return ((LobbySpineLoadInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_DEFAULTLOBBYSPINELOADINFO_OFFSET))(nullptr);
		}

		::System::Boolean CanOpenRepurchase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_CANOPENREPURCHASE_OFFSET))(nullptr);
		}

		::System::Boolean CanOpenShortExpirationCurrency()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_CANOPENSHORTEXPIRATIONCURRENCY_OFFSET))(nullptr);
		}

		Il2CppObject* RotateLobbySpineIndex(::System::Int64 arg, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_ROTATELOBBYSPINEINDEX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		LobbySpineLoadInfo* RandomLobbySpineLoadInfo()
		{
			return ((LobbySpineLoadInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_RANDOMLOBBYSPINELOADINFO_OFFSET))(nullptr);
		}

		::System::Boolean IsDay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_ISDAY_OFFSET))(nullptr);
		}

		::System::Boolean CanRotateLobbySpine(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_CANROTATELOBBYSPINE_OFFSET))(arg, nullptr);
		}

		::System::String* _CommonLobbySpineLoadInfo_g__GetLobbyCommonPath|13_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE__COMMONLOBBYSPINELOADINFO_G__GETLOBBYCOMMONPATH|13_0_OFFSET))(nullptr);
		}

		::System::Void SetFirstSpineTrackMixValue(::UnityEngine::Playables::PlayableDirector* arg, ::System::Boolean arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_SETFIRSTSPINETRACKMIXVALUE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CanPlayTimeLine(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_CANPLAYTIMELINE_OFFSET))(str, nullptr);
		}

		LobbySpineLoadInfo* PrevLobbySpineLoadInfo()
		{
			return ((LobbySpineLoadInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_PREVLOBBYSPINELOADINFO_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean CanOpenShortExpirationItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_CANOPENSHORTEXPIRATIONITEM_OFFSET))(nullptr);
		}

		LobbySpineLoadInfo* NextLobbySpineLoadInfo()
		{
			return ((LobbySpineLoadInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_NEXTLOBBYSPINELOADINFO_OFFSET))(nullptr);
		}

		::System::Void PlayTimeLineIfAvailable(UILobbyContainer* arg, ::UnityEngine::Playables::PlayableDirector&* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(UILobbyContainer*, ::UnityEngine::Playables::PlayableDirector&*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSERVICE_PLAYTIMELINEIFAVAILABLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

