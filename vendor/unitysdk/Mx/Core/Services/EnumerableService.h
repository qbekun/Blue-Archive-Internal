#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Math { class IRandomService; }

#define MX_CORE_SERVICES_ENUMERABLESERVICE_AREEQUAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_AREEQUAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_ISNULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_ISNULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_ISNULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_ISNOTNULLANDNOTEMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_ISNOTNULLANDNOTEMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_ISNOTNULLANDNOTEMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_COUNTNOLINQ_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_ISANYOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_AREANYOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_RANDOMELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_RANDOMELEMENTORDEFAULTIFEMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_SELECTRANDOM_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_RANDOMKEYS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_RANDOMVALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_RANDOMIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_SHUFFLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_SHUFFLEITERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_YIELD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_LHSHASEVERYELEMENTOFRHS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_TOCSV_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_TOCSV_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_TOCSV_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_SWAP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_TOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_ISUNIQUEBY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_RANDOMELEMENTBYWEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_RANDOMELEMENTBYWEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_GETPREVORNEXTELEMENTFROMLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_TRYADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMERABLESERVICE_TRYADD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Core::Services
{
	inline static constexpr unsigned int EnumerableService_TypeDefinitionIndex = 12770;

	class EnumerableService : public Il2CppObject
	{
	public:
		::System::Boolean AreEqual(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_AREEQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AreEqual(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_AREEQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsNullOrEmpty(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_ISNULLOREMPTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNullOrEmpty(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_ISNULLOREMPTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNullOrEmpty(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_ISNULLOREMPTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNotNullAndNotEmpty(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_ISNOTNULLANDNOTEMPTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNotNullAndNotEmpty(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_ISNOTNULLANDNOTEMPTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNotNullAndNotEmpty(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_ISNOTNULLANDNOTEMPTY_OFFSET))(arg, nullptr);
		}

		::System::Int32 CountNoLinq(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_COUNTNOLINQ_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsAnyOf(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_ISANYOF_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AreAnyOf(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_AREANYOF_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* RandomElement(Il2CppObject* arg, ::MX::Core::Math::IRandomService* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::MX::Core::Math::IRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_RANDOMELEMENT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* RandomElementOrDefaultIfEmpty(Il2CppObject* arg, ::MX::Core::Math::IRandomService* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::MX::Core::Math::IRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_RANDOMELEMENTORDEFAULTIFEMPTY_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* SelectRandom(Il2CppObject* arg, ::MX::Core::Math::IRandomService* arg2, ::System::Int32 arg3)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::MX::Core::Math::IRandomService*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_SELECTRANDOM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* RandomKeys(Il2CppObject* arg, ::MX::Core::Math::IRandomService* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::MX::Core::Math::IRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_RANDOMKEYS_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* RandomValues(Il2CppObject* arg, ::MX::Core::Math::IRandomService* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::MX::Core::Math::IRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_RANDOMVALUES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Randomize(Il2CppObject* arg, ::MX::Core::Math::IRandomService* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::Core::Math::IRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_RANDOMIZE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Shuffle(Il2CppObject* arg, ::MX::Core::Math::IRandomService* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::MX::Core::Math::IRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_SHUFFLE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* ShuffleIterator(Il2CppObject* arg, ::MX::Core::Math::IRandomService* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::MX::Core::Math::IRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_SHUFFLEITERATOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Yield(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_YIELD_OFFSET))(arg, nullptr);
		}

		::System::Boolean LhsHasEveryElementOfRhs(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_LHSHASEVERYELEMENTOFRHS_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* ToCsv(Il2CppObject* arg)
		{
			return ((::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_TOCSV_OFFSET))(arg, nullptr);
		}

		::System::String* ToCsv(Il2CppObject* arg, ::System::Char arg2)
		{
			return ((::System::String*(*)(Il2CppObject*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_TOCSV_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* ToCsv(Il2CppObject* arg, ::System::String* str)
		{
			return ((::System::String*(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_TOCSV_OFFSET))(arg, str, nullptr);
		}

		Il2CppObject* Swap(Il2CppObject* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_SWAP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_TOARRAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsUniqueBy(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_ISUNIQUEBY_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* RandomElementByWeight(Il2CppObject* arg, ::MX::Core::Math::IRandomService* arg2, Il2CppObject* arg3)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::MX::Core::Math::IRandomService*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_RANDOMELEMENTBYWEIGHT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* RandomElementByWeight(Il2CppObject* arg, ::MX::Core::Math::IRandomService* arg2, ::System::Int32 arg3, Il2CppObject* arg4)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::MX::Core::Math::IRandomService*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_RANDOMELEMENTBYWEIGHT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* GetPrevOrNextElementFromList(Il2CppObject* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_GETPREVORNEXTELEMENTFROMLIST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean TryAdd(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_TRYADD_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* TryAdd(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMERABLESERVICE_TRYADD_OFFSET))(arg, arg2, nullptr);
		}

	};
}

