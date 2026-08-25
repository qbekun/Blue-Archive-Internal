#pragma once
#include "../../../unitysdk.h"

namespace CommunityToolkit::HighPerformance::Buffers { class StringPool; }

#define COMMUNITYTOOLKIT_HIGHPERFORMANCE_BUFFERS_STRINGPOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x288B060)
#define COMMUNITYTOOLKIT_HIGHPERFORMANCE_BUFFERS_STRINGPOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x288B070)
#define COMMUNITYTOOLKIT_HIGHPERFORMANCE_BUFFERS_STRINGPOOL_GET_SHARED_OFFSET UNITYSDK_OFFSET(0x288B780)
#define COMMUNITYTOOLKIT_HIGHPERFORMANCE_BUFFERS_STRINGPOOL_GETORADD_OFFSET UNITYSDK_OFFSET(0x288B7D0)
#define COMMUNITYTOOLKIT_HIGHPERFORMANCE_BUFFERS_STRINGPOOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x288BA90)
#define COMMUNITYTOOLKIT_HIGHPERFORMANCE_BUFFERS_STRINGPOOL_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x288B560)
#define COMMUNITYTOOLKIT_HIGHPERFORMANCE_BUFFERS_STRINGPOOL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x288BAE0)
#define COMMUNITYTOOLKIT_HIGHPERFORMANCE_BUFFERS_STRINGPOOL__.CTOR_G__FINDFACTORS|5_0_OFFSET UNITYSDK_OFFSET(0x288B5D0)

namespace CommunityToolkit::HighPerformance::Buffers
{
	inline static constexpr unsigned int StringPool_TypeDefinitionIndex = 37768;

	class StringPool : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* maps; // 0x10
		::System::Int32 numberOfMaps; // 0x18
		::CommunityToolkit::HighPerformance::Buffers::StringPool* _Shared_k__BackingField; // 0x0
		::System::Int32 _Size_k__BackingField; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMUNITYTOOLKIT_HIGHPERFORMANCE_BUFFERS_STRINGPOOL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COMMUNITYTOOLKIT_HIGHPERFORMANCE_BUFFERS_STRINGPOOL_.CTOR_OFFSET))(arg, nullptr);
		}

		::CommunityToolkit::HighPerformance::Buffers::StringPool* get_Shared()
		{
			return (return (::CommunityToolkit::HighPerformance::Buffers::StringPool*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMUNITYTOOLKIT_HIGHPERFORMANCE_BUFFERS_STRINGPOOL_GET_SHARED_OFFSET))(nullptr);
		}

		::System::String* GetOrAdd(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMMUNITYTOOLKIT_HIGHPERFORMANCE_BUFFERS_STRINGPOOL_GETORADD_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMMUNITYTOOLKIT_HIGHPERFORMANCE_BUFFERS_STRINGPOOL_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowArgumentOutOfRangeException()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMUNITYTOOLKIT_HIGHPERFORMANCE_BUFFERS_STRINGPOOL_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMUNITYTOOLKIT_HIGHPERFORMANCE_BUFFERS_STRINGPOOL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _.ctor_g__FindFactors|5_0(::System::Int32 arg, ::System::Int32 arg, uint32_t&* arg, uint32_t&* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, uint32_t&*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + COMMUNITYTOOLKIT_HIGHPERFORMANCE_BUFFERS_STRINGPOOL__.CTOR_G__FINDFACTORS|5_0_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

