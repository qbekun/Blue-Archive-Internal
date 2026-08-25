#pragma once
#include "../../unitysdk.h"

#define NPA_ENGINE_UPDATABLEBASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_ENGINE_UPDATABLEBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD5A30)
#define NPA_ENGINE_UPDATABLEBASE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9CD5AE0)
#define NPA_ENGINE_UPDATABLEBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9CD5BA0)

namespace NPA::Engine
{
	inline static constexpr unsigned int UpdatableBase_TypeDefinitionIndex = 27456;

	class UpdatableBase : public Il2CppObject
	{
	public:
		::System::Boolean _disposed; // 0x10

		::System::Void OnUpdate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_ENGINE_UPDATABLEBASE_ONUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_ENGINE_UPDATABLEBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_ENGINE_UPDATABLEBASE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_ENGINE_UPDATABLEBASE_DISPOSE_OFFSET))(nullptr);
		}

	};
}

