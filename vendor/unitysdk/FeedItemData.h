#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class SNSPostExcel; }
namespace MX::GameLogic::DBModel { class SNSPostDB; }
namespace MX::Data::Excel { class FieldSNSPostExcel; }
class FeedItemData;

#define FEEDITEMDATA_GET_ISFIELDPOST_OFFSET UNITYSDK_OFFSET(0xAD6710)
#define FEEDITEMDATA_SET_ISFIELDPOST_OFFSET UNITYSDK_OFFSET(0xAD6720)
#define FEEDITEMDATA_GET_ISFIELDANIPLAYED_OFFSET UNITYSDK_OFFSET(0xAD6730)
#define FEEDITEMDATA_SET_ISFIELDANIPLAYED_OFFSET UNITYSDK_OFFSET(0xAD6740)
#define FEEDITEMDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xAD6750)
#define FEEDITEMDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xAD67A0)
#define FEEDITEMDATA_MAKELASTVIEWEDMARKER_OFFSET UNITYSDK_OFFSET(0xAD6890)
#define FEEDITEMDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xAD6900)
#define FEEDITEMDATA_GETREPOSTMINNUM_OFFSET UNITYSDK_OFFSET(0xAD6930)
#define FEEDITEMDATA_GETREPOSTMAXNUM_OFFSET UNITYSDK_OFFSET(0xAD6950)
#define FEEDITEMDATA_GETFAVORMINNUM_OFFSET UNITYSDK_OFFSET(0xAD6970)
#define FEEDITEMDATA_GETFAVORMAXNUM_OFFSET UNITYSDK_OFFSET(0xAD6990)

	inline static constexpr unsigned int FeedItemData_TypeDefinitionIndex = 8065;

	class FeedItemData : public Il2CppObject
	{
	public:
		::MX::Data::Excel::SNSPostExcel* PostExcel; // 0x10
		::MX::GameLogic::DBModel::SNSPostDB* PostDB; // 0x20
		::System::Boolean isBookmark; // 0x28
		::System::Single currentHeight; // 0x2C
		::System::Int32 threadDepth; // 0x30
		::MX::Data::Excel::FieldSNSPostExcel* FieldPostExcel; // 0x38
		::System::Boolean _IsFieldPost_k__BackingField; // 0x48
		::System::Boolean _IsFieldAniPlayed_k__BackingField; // 0x49

		::System::Boolean get_IsFieldPost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDITEMDATA_GET_ISFIELDPOST_OFFSET))(nullptr);
		}

		::System::Void set_IsFieldPost(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FEEDITEMDATA_SET_ISFIELDPOST_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFieldAniPlayed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDITEMDATA_GET_ISFIELDANIPLAYED_OFFSET))(nullptr);
		}

		::System::Void set_IsFieldAniPlayed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FEEDITEMDATA_SET_ISFIELDANIPLAYED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::SNSPostExcel* arg, ::MX::GameLogic::DBModel::SNSPostDB* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::SNSPostExcel*, ::MX::GameLogic::DBModel::SNSPostDB*, ::PVOID))((::PBYTE)hIl2Cpp + FEEDITEMDATA_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::FieldSNSPostExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::FieldSNSPostExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FEEDITEMDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		FeedItemData* MakeLastViewedMarker(::System::Single arg)
		{
			return ((FeedItemData*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FEEDITEMDATA_MAKELASTVIEWEDMARKER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FEEDITEMDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetRepostMinNum()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDITEMDATA_GETREPOSTMINNUM_OFFSET))(nullptr);
		}

		::System::Int64 GetRepostMaxNum()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDITEMDATA_GETREPOSTMAXNUM_OFFSET))(nullptr);
		}

		::System::Int64 GetFavorMinNum()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDITEMDATA_GETFAVORMINNUM_OFFSET))(nullptr);
		}

		::System::Int64 GetFavorMaxNum()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDITEMDATA_GETFAVORMAXNUM_OFFSET))(nullptr);
		}

	};

