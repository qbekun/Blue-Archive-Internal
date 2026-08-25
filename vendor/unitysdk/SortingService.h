#pragma once
#include "unitysdk.h"

class AssetObjectBase;
namespace FlatData { class SortingTarget; }
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define SORTINGSERVICE_COMPARERARITY_OFFSET UNITYSDK_OFFSET(0x1FDCB00)
#define SORTINGSERVICE_COMPARETIER_OFFSET UNITYSDK_OFFSET(0x1FDCBA0)
#define SORTINGSERVICE_COMPARESTARGRADE_OFFSET UNITYSDK_OFFSET(0x1FDCBF0)
#define SORTINGSERVICE_COMPARELEVEL_OFFSET UNITYSDK_OFFSET(0x1FDCC70)
#define SORTINGSERVICE_GETSORTED_OFFSET UNITYSDK_OFFSET(0x1FDCD30)
#define SORTINGSERVICE_GETSORTINGQUEUE_OFFSET UNITYSDK_OFFSET(0x1FDCE50)
#define SORTINGSERVICE_GETSORTEDAUTOSYNTHITEMS_OFFSET UNITYSDK_OFFSET(0x1FDCF50)
#define SORTINGSERVICE_COMPAREPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1FDD020)
#define SORTINGSERVICE_COMPARERARITY_OFFSET UNITYSDK_OFFSET(0x1FDD0D0)
#define SORTINGSERVICE_COMPARECATEGORY_OFFSET UNITYSDK_OFFSET(0x1FDD4E0)
#define SORTINGSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FDD910)

	inline static constexpr unsigned int SortingService_TypeDefinitionIndex = 3052;

	class SortingService : public Il2CppObject
	{
	public:
		::System::Int32 CompareRarity(AssetObjectBase* arg, AssetObjectBase* arg2, ::System::Boolean arg3)
		{
			return ((::System::Int32(*)(AssetObjectBase*, AssetObjectBase*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SORTINGSERVICE_COMPARERARITY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 CompareTier(AssetObjectBase* arg, AssetObjectBase* arg2, ::System::Boolean arg3)
		{
			return ((::System::Int32(*)(AssetObjectBase*, AssetObjectBase*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SORTINGSERVICE_COMPARETIER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 CompareStarGrade(AssetObjectBase* arg, AssetObjectBase* arg2, ::System::Boolean arg3)
		{
			return ((::System::Int32(*)(AssetObjectBase*, AssetObjectBase*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SORTINGSERVICE_COMPARESTARGRADE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 CompareLevel(AssetObjectBase* arg, AssetObjectBase* arg2, ::System::Boolean arg3)
		{
			return ((::System::Int32(*)(AssetObjectBase*, AssetObjectBase*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SORTINGSERVICE_COMPARELEVEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetSorted(Il2CppObject* arg, ::FlatData::SortingTarget* arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::FlatData::SortingTarget*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SORTINGSERVICE_GETSORTED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetSortingQueue(::FlatData::SortingTarget* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::SortingTarget*, ::PVOID))((::PBYTE)hIl2Cpp + SORTINGSERVICE_GETSORTINGQUEUE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetSortedAutoSynthItems(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SORTINGSERVICE_GETSORTEDAUTOSYNTHITEMS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CompareParcelType(::MX::GameLogic::Parcel::ParcelKeyPair* arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2, ::System::Boolean arg3)
		{
			return ((::System::Int32(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SORTINGSERVICE_COMPAREPARCELTYPE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 CompareRarity(::MX::GameLogic::Parcel::ParcelKeyPair* arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2, ::System::Boolean arg3)
		{
			return ((::System::Int32(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SORTINGSERVICE_COMPARERARITY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 CompareCategory(::MX::GameLogic::Parcel::ParcelKeyPair* arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2, ::System::Boolean arg3)
		{
			return ((::System::Int32(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SORTINGSERVICE_COMPARECATEGORY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SORTINGSERVICE_.CTOR_OFFSET))(nullptr);
		}

	};

