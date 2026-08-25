#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define <>C__DISPLAYCLASS150_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x2002DF0)
#define <>C__DISPLAYCLASS150_0__SYNCRESULT_B__0_OFFSET UNITYSDK_OFFSET(0x200A0B0)

	inline static constexpr unsigned int <>c__DisplayClass150_0_TypeDefinitionIndex = 3128;

	class <>c__DisplayClass150_0 : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* parcelResultDB; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS150_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SyncResult_b__0(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS150_0__SYNCRESULT_B__0_OFFSET))(arg, nullptr);
		}

	};

