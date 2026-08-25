#pragma once
#include "unitysdk.h"

#define MESHTRANSFORMLIST_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4AD1C0)
#define MESHTRANSFORMLIST_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4AD200)

	inline static constexpr unsigned int MeshTransformList_TypeDefinitionIndex = 37614;

	class MeshTransformList : public Il2CppObject
	{
	public:
		::System::Int32 m_Self; // 0x10

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHTRANSFORMLIST_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MESHTRANSFORMLIST_DISPOSE_OFFSET))(arg, nullptr);
		}

	};

