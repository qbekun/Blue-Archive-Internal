#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class StatCorrection; }
namespace MX::Core::Math { class BasisPoint; }

#define MX_LOGIC_DATA_STATCORRECTION_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x11E4920)
#define MX_LOGIC_DATA_STATCORRECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E4A90)
#define MX_LOGIC_DATA_STATCORRECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E4AC0)
#define MX_LOGIC_DATA_STATCORRECTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x11E4AF0)
#define MX_LOGIC_DATA_STATCORRECTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11E4BA0)
#define MX_LOGIC_DATA_STATCORRECTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x11E49A0)
#define MX_LOGIC_DATA_STATCORRECTION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11E4C70)
#define MX_LOGIC_DATA_STATCORRECTION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11E4CF0)
#define MX_LOGIC_DATA_STATCORRECTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11E4DF0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int StatCorrection_TypeDefinitionIndex = 13446;

	class StatCorrection : public Il2CppObject
	{
	public:
		::MX::Logic::Data::StatCorrection* Empty; // 0x0
		::MX::Logic::Data::StatCorrection* Default; // 0x38
		::System::Int64 SightRangeBase; // 0x10
		::MX::Core::Math::BasisPoint* SightRangeRate; // 0x18
		::System::Int64 WeaponRangeBase; // 0x20
		::MX::Core::Math::BasisPoint* WeaponRangeRate; // 0x28
		::System::Int64 SkillRangeBase; // 0x30
		::MX::Core::Math::BasisPoint* SkillRangeRate; // 0x38
		::System::Boolean SightRangeMax; // 0x40

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCORRECTION_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5, ::System::Int64 arg6, ::System::Boolean arg7)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCORRECTION_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::MX::Core::Math::BasisPoint* arg2, ::System::Int64 arg3, ::MX::Core::Math::BasisPoint* arg4, ::System::Int64 arg5, ::MX::Core::Math::BasisPoint* arg6, ::System::Boolean arg7)
		{
			((::System::Void(*)(::System::Int64, ::MX::Core::Math::BasisPoint*, ::System::Int64, ::MX::Core::Math::BasisPoint*, ::System::Int64, ::MX::Core::Math::BasisPoint*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCORRECTION_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCORRECTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCORRECTION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::StatCorrection* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::StatCorrection*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCORRECTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::StatCorrection* arg, ::MX::Logic::Data::StatCorrection* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::StatCorrection*, ::MX::Logic::Data::StatCorrection*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCORRECTION_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::StatCorrection* arg, ::MX::Logic::Data::StatCorrection* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::StatCorrection*, ::MX::Logic::Data::StatCorrection*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCORRECTION_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCORRECTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

