#pragma once
#include "unitysdk.h"

#define DEFERBINDINGRESOLUTIONWRAPPER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E592E0)
#define DEFERBINDINGRESOLUTIONWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E595F0)
#define DEFERBINDINGRESOLUTIONWRAPPER_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x9E59600)

	inline static constexpr unsigned int DeferBindingResolutionWrapper_TypeDefinitionIndex = 28406;

	class DeferBindingResolutionWrapper : public Il2CppObject
	{
	public:
		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFERBINDINGRESOLUTIONWRAPPER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFERBINDINGRESOLUTIONWRAPPER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Acquire()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFERBINDINGRESOLUTIONWRAPPER_ACQUIRE_OFFSET))(nullptr);
		}

	};

