#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class AttachmentEmblemListResponse; }
namespace MX::NetworkProtocol { class AttachmentEmblemAttachResponse; }
namespace MX::GameLogic::DBModel { class AccountAttachmentDB; }
namespace MX::NetworkProtocol { class AttachmentEmblemAcquireResponse; }
class EquipType;
class AttachmentObject;

#define ATTACHMENTEMBLEMOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x182AF30)
#define ATTACHMENTEMBLEMOBJECT_GET_NEEDREQUESTALREADYACQUIRED_OFFSET UNITYSDK_OFFSET(0x182B000)
#define ATTACHMENTEMBLEMOBJECT_SYNCLOGIN_ATTACHMENTEMBLEMLIST_OFFSET UNITYSDK_OFFSET(0x182B010)
#define ATTACHMENTEMBLEMOBJECT_GETACCOUNTEQUIPEDEMBLEMID_OFFSET UNITYSDK_OFFSET(0x182B1D0)
#define ATTACHMENTEMBLEMOBJECT_SYNC_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0x1823120)
#define ATTACHMENTEMBLEMOBJECT_SYNC_ATTACHMENTEMBLEMATTACH_OFFSET UNITYSDK_OFFSET(0x182B460)
#define ATTACHMENTEMBLEMOBJECT_GET_EMBLEMDBS_OFFSET UNITYSDK_OFFSET(0x182B500)
#define ATTACHMENTEMBLEMOBJECT_SET_PREVFAVORRANKCACHE_OFFSET UNITYSDK_OFFSET(0x182B510)
#define ATTACHMENTEMBLEMOBJECT_REQUESTFAVOREMBLEM_OFFSET UNITYSDK_OFFSET(0x182B520)
#define ATTACHMENTEMBLEMOBJECT_GETEMBLEMDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x182BD80)
#define ATTACHMENTEMBLEMOBJECT_GETFIRSTEMBLEMID_OFFSET UNITYSDK_OFFSET(0x182B380)
#define ATTACHMENTEMBLEMOBJECT_REQUESTACQUIREDEMBLEM_OFFSET UNITYSDK_OFFSET(0x182C120)
#define ATTACHMENTEMBLEMOBJECT_GET_PREVFAVORRANKCACHE_OFFSET UNITYSDK_OFFSET(0x182CDF0)
#define ATTACHMENTEMBLEMOBJECT_GETEMBLEMID_OFFSET UNITYSDK_OFFSET(0x182CE00)
#define ATTACHMENTEMBLEMOBJECT_CONTAINS_OFFSET UNITYSDK_OFFSET(0x182CE10)
#define ATTACHMENTEMBLEMOBJECT_NEEDSHOWNEWEMBLEMYELLOWDOT_OFFSET UNITYSDK_OFFSET(0x182CE60)
#define ATTACHMENTEMBLEMOBJECT_SET_NEEDREQUESTALREADYACQUIRED_OFFSET UNITYSDK_OFFSET(0x182CFC0)
#define ATTACHMENTEMBLEMOBJECT_SET_EMBLEMDBS_OFFSET UNITYSDK_OFFSET(0x182CFD0)
#define ATTACHMENTEMBLEMOBJECT_CACHEEQUIPEDEMBLEMID_OFFSET UNITYSDK_OFFSET(0x182CFE0)
#define ATTACHMENTEMBLEMOBJECT_SYNC_EMBLEMACQUIRE_OFFSET UNITYSDK_OFFSET(0x182CFF0)
#define ATTACHMENTEMBLEMOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x182D330)
#define ATTACHMENTEMBLEMOBJECT_GETEMBLEMNAME_OFFSET UNITYSDK_OFFSET(0x182D340)
#define ATTACHMENTEMBLEMOBJECT_GETCACHEDEQUIPEDEMBLEMID_OFFSET UNITYSDK_OFFSET(0x182D5B0)
#define ATTACHMENTEMBLEMOBJECT_GET_ATTACHMENTINFO_OFFSET UNITYSDK_OFFSET(0x182B300)
#define ATTACHMENTEMBLEMOBJECT_SETFAVORRANKBEFOREGROWTH_OFFSET UNITYSDK_OFFSET(0x1827D40)

	inline static constexpr unsigned int AttachmentEmblemObject_TypeDefinitionIndex = 1314;

	class AttachmentEmblemObject : public Il2CppObject
	{
	public:
		Il2CppObject* _EmblemDBs_k__BackingField; // 0x10
		Il2CppObject* _PrevFavorRankCache_k__BackingField; // 0x18
		::System::Boolean _NeedRequestAlreadyAcquired_k__BackingField; // 0x20
		Il2CppObject* firstDefaultEmblemId; // 0x28
		::System::Int64 equipEmblemIdCache; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedRequestAlreadyAcquired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_GET_NEEDREQUESTALREADYACQUIRED_OFFSET))(nullptr);
		}

		::System::Void SyncLogin_AttachmentEmblemList(::MX::NetworkProtocol::AttachmentEmblemListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::AttachmentEmblemListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_SYNCLOGIN_ATTACHMENTEMBLEMLIST_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetAccountEquipedEmblemId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_GETACCOUNTEQUIPEDEMBLEMID_OFFSET))(nullptr);
		}

		::System::Void Sync_ParcelResult(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_SYNC_PARCELRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void Sync_AttachmentEmblemAttach(::MX::NetworkProtocol::AttachmentEmblemAttachResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::AttachmentEmblemAttachResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_SYNC_ATTACHMENTEMBLEMATTACH_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EmblemDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_GET_EMBLEMDBS_OFFSET))(nullptr);
		}

		::System::Void set_PrevFavorRankCache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_SET_PREVFAVORRANKCACHE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestFavorEmblem(Il2CppObject* arg, ::System::Action* arg2, ::System::Boolean arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_REQUESTFAVOREMBLEM_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::String* GetEmblemDescription(::System::Int64 arg)
		{
			return ((::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_GETEMBLEMDESCRIPTION_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetFirstEmblemId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_GETFIRSTEMBLEMID_OFFSET))(nullptr);
		}

		::System::Void RequestAcquiredEmblem(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_REQUESTACQUIREDEMBLEM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PrevFavorRankCache()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_GET_PREVFAVORRANKCACHE_OFFSET))(nullptr);
		}

		::System::Int64 GetEmblemId(::MX::GameLogic::DBModel::AccountAttachmentDB* arg)
		{
			return ((::System::Int64(*)(::MX::GameLogic::DBModel::AccountAttachmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_GETEMBLEMID_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Boolean NeedShowNewEmblemYellowDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_NEEDSHOWNEWEMBLEMYELLOWDOT_OFFSET))(nullptr);
		}

		::System::Void set_NeedRequestAlreadyAcquired(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_SET_NEEDREQUESTALREADYACQUIRED_OFFSET))(arg, nullptr);
		}

		::System::Void set_EmblemDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_SET_EMBLEMDBS_OFFSET))(arg, nullptr);
		}

		::System::Void CacheEquipedEmblemId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_CACHEEQUIPEDEMBLEMID_OFFSET))(arg, nullptr);
		}

		::System::Void Sync_EmblemAcquire(::MX::NetworkProtocol::AttachmentEmblemAcquireResponse* arg, ::System::Action* arg2, ::System::Boolean arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::NetworkProtocol::AttachmentEmblemAcquireResponse*, ::System::Action*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_SYNC_EMBLEMACQUIRE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::String* GetEmblemName(::System::Int64 arg)
		{
			return ((::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_GETEMBLEMNAME_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetCachedEquipedEmblemId(EquipType* arg)
		{
			return ((::System::Int64(*)(EquipType*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_GETCACHEDEQUIPEDEMBLEMID_OFFSET))(arg, nullptr);
		}

		AttachmentObject* get_attachmentInfo()
		{
			return ((AttachmentObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_GET_ATTACHMENTINFO_OFFSET))(nullptr);
		}

		::System::Void SetFavorRankBeforeGrowth(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTEMBLEMOBJECT_SETFAVORRANKBEFOREGROWTH_OFFSET))(arg, arg2, nullptr);
		}

	};

