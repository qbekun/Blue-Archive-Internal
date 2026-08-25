#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackReaderOptionalState; }
namespace MemoryPack { class MemoryPackWriterOptionalState; }
namespace MemoryPack { class MemoryPackSerializerOptions; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MemoryPack::Internal { class ReusableLinkedArrayBufferWriter; }

#define MEMORYPACK_MEMORYPACKSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKSERIALIZER_DESERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9065D60)
#define MEMORYPACK_MEMORYPACKSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x90671A0)
#define MEMORYPACK_MEMORYPACKSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9067C90)
#define MEMORYPACK_MEMORYPACKSERIALIZER_SERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x90683A0)
#define MEMORYPACK_MEMORYPACKSERIALIZER_SERIALIZETOTEMPWRITER_OFFSET UNITYSDK_OFFSET(0x9068530)
#define MEMORYPACK_MEMORYPACKSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9068E30)
#define MEMORYPACK_MEMORYPACKSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9068E70)
#define MEMORYPACK_MEMORYPACKSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x90696E0)
#define MEMORYPACK_MEMORYPACKSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9069710)
#define MEMORYPACK_MEMORYPACKSERIALIZER_DESERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x9069F20)
#define MEMORYPACK_MEMORYPACKSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKSERIALIZER_SERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackSerializer_TypeDefinitionIndex = 35435;

	class MemoryPackSerializer : public Il2CppObject
	{
	public:
		::MemoryPack::MemoryPackReaderOptionalState* threadStaticReaderOptionalState;
		SerializerWriterThreadStaticState* threadStaticState;
		::MemoryPack::MemoryPackWriterOptionalState* threadStaticWriterOptionalState;

		Il2CppObject* Deserialize(Il2CppObject* arg, ::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Deserialize(Il2CppObject* arg, Il2CppObject&* arg, ::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject&*, ::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZER_DESERIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Deserialize(Il2CppObject&* arg, ::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, ::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Deserialize(Il2CppObject&* arg, Il2CppObject&* arg, ::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject&*, Il2CppObject&*, ::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZER_DESERIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* DeserializeAsync(::System::IO::Stream* arg, ::MemoryPack::MemoryPackSerializerOptions* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::IO::Stream*, ::MemoryPack::MemoryPackSerializerOptions*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZER_DESERIALIZEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Serialize(::System::Type* arg, ::System::Object* arg, ::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Object*, ::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZER_SERIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Serialize(::System::Type* arg, Il2CppObject&* arg, ::System::Object* arg, ::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			((::System::Void(*)(::System::Type*, Il2CppObject&*, ::System::Object*, ::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZER_SERIALIZE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Serialize(::System::Type* arg, ::MemoryPack::MemoryPackWriter&* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Type*, ::MemoryPack::MemoryPackWriter&*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZER_SERIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::ValueTask* SerializeAsync(::System::Type* arg, ::System::IO::Stream* arg, ::System::Object* arg, ::MemoryPack::MemoryPackSerializerOptions* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::ValueTask*(*)(::System::Type*, ::System::IO::Stream*, ::System::Object*, ::MemoryPack::MemoryPackSerializerOptions*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZER_SERIALIZEASYNC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SerializeToTempWriter(::MemoryPack::Internal::ReusableLinkedArrayBufferWriter* arg, ::System::Type* arg, ::System::Object* arg, ::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			((::System::Void(*)(::MemoryPack::Internal::ReusableLinkedArrayBufferWriter*, ::System::Type*, ::System::Object*, ::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZER_SERIALIZETOTEMPWRITER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* Deserialize(::System::Type* arg, Il2CppObject* arg, ::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, Il2CppObject*, ::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZER_DESERIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Deserialize(::System::Type* arg, Il2CppObject* arg, ::System::Object&* arg, ::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			return (return (::System::Int32(*)(::System::Type*, Il2CppObject*, ::System::Object&*, ::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZER_DESERIALIZE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* Deserialize(::System::Type* arg, Il2CppObject&* arg, ::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, Il2CppObject&*, ::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZER_DESERIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Deserialize(::System::Type* arg, Il2CppObject&* arg, ::System::Object&* arg, ::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			return (return (::System::Int32(*)(::System::Type*, Il2CppObject&*, ::System::Object&*, ::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZER_DESERIALIZE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* DeserializeAsync(::System::Type* arg, ::System::IO::Stream* arg, ::MemoryPack::MemoryPackSerializerOptions* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::System::IO::Stream*, ::MemoryPack::MemoryPackSerializerOptions*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZER_DESERIALIZEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Serialize(Il2CppObject&* arg, ::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject&*, ::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(Il2CppObject&* arg, Il2CppObject&* arg, ::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZER_SERIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::ValueTask* SerializeAsync(::System::IO::Stream* arg, Il2CppObject* arg, ::MemoryPack::MemoryPackSerializerOptions* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::ValueTask*(*)(::System::IO::Stream*, Il2CppObject*, ::MemoryPack::MemoryPackSerializerOptions*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZER_SERIALIZEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

