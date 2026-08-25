#pragma once
#include "unitysdk.h"

#define CACHECURVE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x2864A90)
#define CACHECURVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2864AD0)
#define CACHECURVE_ADDUNTIL_OFFSET UNITYSDK_OFFSET(0x2864BE0)
#define CACHECURVE_ADD_OFFSET UNITYSDK_OFFSET(0x2864E20)
#define CACHECURVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x28645C0)

	inline static constexpr unsigned int CacheCurve_TypeDefinitionIndex = 34336;

	class CacheCurve : public Il2CppObject
	{
	public:
		::System::Single StartTime; // 0x10
		::System::Single StepSize; // 0x14
		Il2CppObject* m_Cache; // 0x18

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHECURVE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CACHECURVE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddUntil(Item* arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Item*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CACHECURVE_ADDUNTIL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Add(Item* arg)
		{
			((::System::Void(*)(Item*, ::PVOID))((::PBYTE)hIl2Cpp + CACHECURVE_ADD_OFFSET))(arg, nullptr);
		}

		Item* Evaluate(::System::Single arg)
		{
			return (return (Item*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CACHECURVE_EVALUATE_OFFSET))(arg, nullptr);
		}

	};

