#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3Int; }

#define INDEXMETADATA_PACK_OFFSET UNITYSDK_OFFSET(0x9F831F0)

	inline static constexpr unsigned int IndexMetaData_TypeDefinitionIndex = 33789;

	class IndexMetaData : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3Int* minLocalIdx; // 0x10
		::UnityEngine::Vector3Int* maxLocalIdx; // 0x1C
		::System::Int32 firstChunkIndex; // 0x28
		::System::Int32 minSubdiv; // 0x2C

		::System::Void Pack(::System::Object[]&* arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + INDEXMETADATA_PACK_OFFSET))(arg, nullptr);
		}

	};

