#pragma once
#include "../unitysdk.h"

namespace NPA { class NPErrorCode; }
namespace NPA { class NPRequestTypeTag; }
namespace NPA { class NPLoginType; }
namespace NPA { class NPSnsType; }
namespace NPA { class NPPushAgreementType; }
namespace NPA::Service { class NPPlateActionType; }
namespace NPA { class NPBillingTransactionState; }

#define NPA_NPENUM_ASINT_OFFSET UNITYSDK_OFFSET(0x9BBCCD0)
#define NPA_NPENUM_ASINT_OFFSET UNITYSDK_OFFSET(0x9BBCCE0)
#define NPA_NPENUM_ASINT_OFFSET UNITYSDK_OFFSET(0x9BBCCF0)
#define NPA_NPENUM_ASINT_OFFSET UNITYSDK_OFFSET(0x9BBCD00)
#define NPA_NPENUM_ASINT_OFFSET UNITYSDK_OFFSET(0x9BBCD10)
#define NPA_NPENUM_ASINT_OFFSET UNITYSDK_OFFSET(0x9BBCD20)
#define NPA_NPENUM_ASINT_OFFSET UNITYSDK_OFFSET(0x9BBCD30)

namespace NPA
{
	inline static constexpr unsigned int NPEnum_TypeDefinitionIndex = 25514;

	class NPEnum : public Il2CppObject
	{
	public:
		::System::Int32 AsInt(::NPA::NPErrorCode* arg)
		{
			return (return (::System::Int32(*)(::NPA::NPErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPENUM_ASINT_OFFSET))(arg, nullptr);
		}

		::System::Int32 AsInt(::NPA::NPRequestTypeTag* arg)
		{
			return (return (::System::Int32(*)(::NPA::NPRequestTypeTag*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPENUM_ASINT_OFFSET))(arg, nullptr);
		}

		::System::Int32 AsInt(::NPA::NPLoginType* arg)
		{
			return (return (::System::Int32(*)(::NPA::NPLoginType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPENUM_ASINT_OFFSET))(arg, nullptr);
		}

		::System::Int32 AsInt(::NPA::NPSnsType* arg)
		{
			return (return (::System::Int32(*)(::NPA::NPSnsType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPENUM_ASINT_OFFSET))(arg, nullptr);
		}

		::System::Int32 AsInt(::NPA::NPPushAgreementType* arg)
		{
			return (return (::System::Int32(*)(::NPA::NPPushAgreementType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPENUM_ASINT_OFFSET))(arg, nullptr);
		}

		::System::Int32 AsInt(::NPA::Service::NPPlateActionType* arg)
		{
			return (return (::System::Int32(*)(::NPA::Service::NPPlateActionType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPENUM_ASINT_OFFSET))(arg, nullptr);
		}

		::System::Int32 AsInt(::NPA::NPBillingTransactionState* arg)
		{
			return (return (::System::Int32(*)(::NPA::NPBillingTransactionState*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPENUM_ASINT_OFFSET))(arg, nullptr);
		}

	};
}

