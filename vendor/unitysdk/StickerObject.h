#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class StickerBookDB; }
class StickerHasInfo;

#define STICKEROBJECT_GET_STICKERDBS_OFFSET UNITYSDK_OFFSET(0x1EEC220)
#define STICKEROBJECT_GET_STICKERBOOKDB_OFFSET UNITYSDK_OFFSET(0x1EEC270)
#define STICKEROBJECT_SET_STICKERBOOKDB_OFFSET UNITYSDK_OFFSET(0x1EEC280)
#define STICKEROBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1EEC290)
#define STICKEROBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1EEC700)
#define STICKEROBJECT_HASSTICKER_OFFSET UNITYSDK_OFFSET(0x1EEC5F0)
#define STICKEROBJECT_GETHASINFO_OFFSET UNITYSDK_OFFSET(0x1EEC720)
#define STICKEROBJECT_ANYSTICKERCANUNLOCK_OFFSET UNITYSDK_OFFSET(0x1EEC880)
#define STICKEROBJECT_REQUESTSTICKER_OFFSET UNITYSDK_OFFSET(0x1EEC8D0)
#define STICKEROBJECT_GETREQUESTSTICKER_OFFSET UNITYSDK_OFFSET(0x1EECA10)
#define STICKEROBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EED140)

	inline static constexpr unsigned int StickerObject_TypeDefinitionIndex = 1882;

	class StickerObject : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::StickerBookDB* _StickerBookDB_k__BackingField; // 0x10

		Il2CppObject* get_StickerDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + STICKEROBJECT_GET_STICKERDBS_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::StickerBookDB* get_StickerBookDB()
		{
			return ((::MX::GameLogic::DBModel::StickerBookDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + STICKEROBJECT_GET_STICKERBOOKDB_OFFSET))(nullptr);
		}

		::System::Void set_StickerBookDB(::MX::GameLogic::DBModel::StickerBookDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::StickerBookDB*, ::PVOID))((::PBYTE)hIl2Cpp + STICKEROBJECT_SET_STICKERBOOKDB_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + STICKEROBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::StickerBookDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::StickerBookDB*, ::PVOID))((::PBYTE)hIl2Cpp + STICKEROBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasSticker(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + STICKEROBJECT_HASSTICKER_OFFSET))(arg, nullptr);
		}

		StickerHasInfo* GetHasInfo(::System::Int64 arg)
		{
			return ((StickerHasInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + STICKEROBJECT_GETHASINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean AnyStickerCanUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STICKEROBJECT_ANYSTICKERCANUNLOCK_OFFSET))(nullptr);
		}

		::System::Void RequestSticker(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + STICKEROBJECT_REQUESTSTICKER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRequestSticker()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + STICKEROBJECT_GETREQUESTSTICKER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STICKEROBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

